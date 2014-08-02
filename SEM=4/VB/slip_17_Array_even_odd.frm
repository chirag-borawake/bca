VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3225
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4860
   LinkTopic       =   "Form1"
   ScaleHeight     =   3225
   ScaleWidth      =   4860
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3360
      TabIndex        =   1
      Top             =   1680
      Width           =   975
   End
   Begin VB.CommandButton Insert_Array 
      Caption         =   "Insert array"
      Height          =   495
      Left            =   3360
      TabIndex        =   0
      Top             =   840
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim num(10), n As Integer

Private Sub Exit_Click()
End
End Sub

Private Sub Insert_Array_Click()
n = InputBox("Enter how many elements in array:")
For i = 1 To n
num(i) = InputBox("Enter number " & i)
Next
Print "Even"
For i = 1 To n
If num(i) Mod 2 = 0 Then
    Print num(i);
End If
Next
Print vbNewLine
Print "Odd"
For i = 1 To n
If num(i) Mod 2 <> 0 Then

    Print num(i);
End If
Next
End Sub
 
