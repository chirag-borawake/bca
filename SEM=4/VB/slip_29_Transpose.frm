VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2490
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4095
   LinkTopic       =   "Form1"
   ScaleHeight     =   2490
   ScaleWidth      =   4095
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2760
      TabIndex        =   2
      Top             =   1920
      Width           =   1095
   End
   Begin VB.CommandButton Find_Transpose_matrix 
      Caption         =   "Transpose"
      Height          =   375
      Left            =   2760
      TabIndex        =   1
      Top             =   1200
      Width           =   1095
   End
   Begin VB.CommandButton InsertAndDisplay 
      Caption         =   "Insert matrix"
      Height          =   375
      Left            =   2760
      TabIndex        =   0
      Top             =   480
      Width           =   1095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim matrix_a(1 To 2, 1 To 2)
Dim matrix_t(1 To 2, 1 To 2)
Private Sub Find_Transpose_matrix_Click()
For i = 1 To 2
 For j = 1 To 2
    matrix_t(i, j) = matrix_a(j, i)
  Next j
Next i
Print vbNewLine; "Transpose of given given Matrix."
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_t(i, j) & "  ";
 Next j
 Print vbNewLine
Next i
End Sub
Private Sub InsertAndDisplay_Click()
For i = 1 To 2
 For j = 1 To 2
  matrix_a(i, j) = InputBox("Enter value at Matrix  A" & i & j)
 Next j
Next i
Print vbNewLine; "Given Matrix."
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_a(i, j) & "  ";
 Next j
 Print vbNewLine
Next i
End Sub
Private Sub Exit_Click()
End
End Sub
