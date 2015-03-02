/*Each grammar comes a set of actions (inside the braces) which are executed after it is recognized. This is done recursively over the symbols in leaf-to-root order, where each non terminal is eventually merged into one big tree. The “$$” symbol you will be seeing represents the current root node of each leaf.
This is an Abstract Syntax Tree
*/



/* Operator precedence for mathematical operators */
%left t_leftbracket t_period 
%left t_not //unary minus MISSING 
%left t_mulitplication t_ t_division t_mod
%left t_plus t_minus
%left t_less t_lessequal t_greater t_greaterequal
%left t_equal t_notequal
%left t_and
%left t_or
%left t_assignop


%start program

%%

program : Decl+
        ;

Decl  : VariableDecl 
      | FunctionDecl
      | ClassDecl
      | InterfaceDecl
      ;  
VariableDecl : Variable t_semicolon
             ;
Variable : Type t_id 
         ;
Type : t_int
     | t_double
     | t_bool
     | t_string
     | Type t_leftbracket t_rightbracket 
     | t_id
     ;
FunctionDecl : Type t_id t_leftparen Formals t_rightparen StmtBlock
             | t_void id t_leftparen Formals t_rightparen StmtBlock
             ; 
Formals : Variable+,
        | //empty string
        ;
ClassDecl : class t_id <t_extends t_id> <t_implements t_id+,> t_leftbrace Field* t_rightbrace
          ;
Field : VariableDecl
      | FunctionDecl
      ;
InterfaceDecl : t_interface t_id t_leftbrace Prototype* t_rightbrace
              ;
Prototype : Type t_id t_leftparen Formals t_rightparen t_semicolon 
          | t_void t_id t_leftparen Formals t_rightparen t_semicolon
	  ;
StmtBlock : t_leftbrace VariableDecl* Stmt* t_rightbrace
          ;
Stmt : <Expr> t_semicolon
     | IfStmt
     | WhileStmt
     | ForStmt
     | BreakStmt
     | ReturnStmt
     | PrintStmt
     | StmtBlock
     ;
IfStmt : t_if t_leftparen Expr t_rightparen Stmt <t_else Stmt>
       ;
WhileStmt : t_while t_leftparen Expr t_rightparen Stmt
          ;
ForStmt : t_for t_leftparen <Expr>  t_semicolon Expr <Expr> t_rightparen Stmt
	;
BreakStmt : t_break t_semicolon
	  ;
ReturnStmt : t_return <Expr> t_semicolon
           ;
PrintStmt : t_println t_leftparen Expr+, t_rightparen t_semicolon
          ;
Expr : Lvalue t_assignop Expr
     | Constant
     | Lvalue
     | Call t_leftparen Expr t_rightparen
     | Expr t_plus Expr
     | Expr t_minus Expr
     | Expr t_multiplication Expr
     | Expr t_division Expr
     | Expr t_mod Expr
     | t_minus Expr
     | Expr t_less Expr
     | Expr t_lessequal Expr
     | Expr t_greater Expr
     | Expr t_greaterequal Expr
     | Expr t_equal Expr
     | Expr t_notequal Expr
     | Expr t_and Expr
     | Expr t_or Expr
     | t_not Expr
     | t_readln t_leftparen t_rightparen
     | t_newarray t_leftparen t_intconstant t_comma Type t_rightparen
     ;
Lvalue : t_id
       | Lvalue t_leftbracket Expr t_rightbracket 
       | Lvalue t_period t_id
       ;
Call : t_id t_leftparen Actuals t_rightparen
     | t_id t_period t_id t_leftparen Actuals t_rightparen
     ;
Actuals : Expr+ 
        | //emptystring
	;
Constant : t_intconstant | t_doubleconstant | t_stringconstant | t_boolconstant
         ;

%%














%%
