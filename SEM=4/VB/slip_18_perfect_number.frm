VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2475
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3435
   LinkTopic       =   "Form1"
   ScaleHeight     =   2475
   ScaleWidth      =   3435
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2040
      TabIndex        =   3
      Top             =   1680
      Width           =   975
   End
   Begin VB.CommandButton Perfect 
      Caption         =   "Perfect"
      Height          =   375
      Left            =   360
      TabIndex        =   2
      Top             =   1680
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2040
      TabIndex        =   1
      Text            =   " "
      Top             =   960
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Program for perfect number"
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   240
      Width           =   2175
   End
   Begin VB.Label Label1 
      Caption         =   "Enter Number:"
      Height          =   255
      Left            =   480
      TabIndex        =   0
      Top             =   960
      Width           =   1095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim num, sum As Integer
Private Sub Exit_Click()
End
End Sub

Private Sub Perfect_Click()
sum = 0
num = Text1.Text
For i = 1 To num - 1
  If num Mod i = 0 Then
    sum = sum + i
  End If
Next i
If num = sum Then
   MsgBox " Number is perfect"
Else
MsgBox " Number is not perfect number"
End If
End Sub
