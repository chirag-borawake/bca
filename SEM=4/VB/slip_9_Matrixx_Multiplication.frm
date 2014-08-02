VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5310
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   6810
   LinkTopic       =   "Form1"
   ScaleHeight     =   5310
   ScaleWidth      =   6810
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   4440
      TabIndex        =   2
      Top             =   3240
      Width           =   1455
   End
   Begin VB.CommandButton Mul 
      Caption         =   "Multilpication"
      Height          =   735
      Left            =   4200
      TabIndex        =   1
      Top             =   1920
      Width           =   1455
   End
   Begin VB.CommandButton InsertAndDisplay 
      Caption         =   "InsertAndDisplay"
      Height          =   615
      Left            =   4080
      TabIndex        =   0
      Top             =   600
      Width           =   1815
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
Private Sub Mul_Click()
For i = 1 To 2
 For j = 1 To 2
 matrix_c(i, j) = 0
  For k = 1 To 2
   matrix_c(i, j) = matrix_c(i, j) + (matrix_a(i, k) * matrix_b(k, j))
   Next k
  Next j
Next i

Print "Multilpicaion"
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

