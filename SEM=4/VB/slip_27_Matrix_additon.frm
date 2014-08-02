VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4695
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   7575
   LinkTopic       =   "Form1"
   ScaleHeight     =   4695
   ScaleWidth      =   7575
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   855
      Left            =   4800
      TabIndex        =   2
      Top             =   2760
      Width           =   1575
   End
   Begin VB.CommandButton Add 
      Caption         =   "add"
      Height          =   495
      Left            =   4560
      TabIndex        =   1
      Top             =   1560
      Width           =   1575
   End
   Begin VB.CommandButton InsertAndDisplay 
      Caption         =   "InsertAndDisplay"
      Height          =   615
      Left            =   4440
      TabIndex        =   0
      Top             =   600
      Width           =   1695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim matrix_a(1 To 2, 1 To 2)
Dim matrix_b(1 To 2, 1 To 2)
Dim matrix_c(1 To 2, 1 To 2)

Private Sub Add_Click()
For i = 1 To 2
 For j = 1 To 2
  matrix_c(i, j) = Val(matrix_a(i, j)) + Val(matrix_b(i, j))
  Next j
Next i

Print "Addition"
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_c(i, j) & "  ";
 Next j
 Print vbNewLine
Next i
End Sub

Private Sub Exit_Click()
End
End Sub

Private Sub InsertAndDisplay_Click()
For i = 1 To 2
 For j = 1 To 2
  matrix_a(i, j) = InputBox("Enter value for matrix A:")
 Next j
Next i

For i = 1 To 2
 For j = 1 To 2
  matrix_b(i, j) = InputBox("Enter value for matrix B:")
 Next j
Next i
Print "Matrix A"
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_a(i, j) & "  ";
 Next j
 Print vbNewLine
Next i


Print "Matrix B"
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_b(i, j) & "  ";
 Next j
 Print vbNewLine
Next i
End Sub
