VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2010
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3900
   LinkTopic       =   "Form1"
   ScaleHeight     =   2010
   ScaleWidth      =   3900
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2160
      TabIndex        =   2
      Top             =   1440
      Width           =   1335
   End
   Begin VB.CommandButton Find_Symmetric 
      Caption         =   "Find  symmetric"
      Height          =   495
      Left            =   2160
      TabIndex        =   1
      Top             =   840
      Width           =   1335
   End
   Begin VB.CommandButton InsertAndDisplay 
      Caption         =   "Insert Matrix"
      Height          =   435
      Left            =   2160
      TabIndex        =   0
      Top             =   240
      Width           =   1335
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim matrix_a(1 To 2, 1 To 2)
Dim isSymmetric As Boolean
Private Sub Find_Symmetric_Click()
isSymmetric = True
For i = 1 To 2
 For j = 1 To 2
   If matrix_a(i, j) <> matrix_a(j, i) Then
   isSymmetric = False
   Exit For
   End If
  Next j
Next i
If isSymmetric = True Then
Print "Given matrix is symmetric."
Else
Print "Given matrix not is symmetric."
End If
End Sub

Private Sub Exit_Click()
End
End Sub

Private Sub InsertAndDisplay_Click()
For i = 1 To 2
 For j = 1 To 2
  matrix_a(i, j) = InputBox("Enter value at Matrix  A" & i & j)
 Next j
Next i
Print vbNewLine
Print "Given Matrix."
For i = 1 To 2
 For j = 1 To 2
  Print "  "; matrix_a(i, j) & "  ";
 Next j
 Print vbNewLine
Next i
End Sub
