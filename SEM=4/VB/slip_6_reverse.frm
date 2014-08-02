VERSION 5.00
Begin VB.Form Form5 
   Caption         =   "Form5"
   ClientHeight    =   2115
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4080
   LinkTopic       =   "Form5"
   ScaleHeight     =   2115
   ScaleWidth      =   4080
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   2280
      TabIndex        =   3
      Top             =   1320
      Width           =   1215
   End
   Begin VB.CommandButton Reverse_Number 
      Caption         =   "Reverse"
      Height          =   495
      Left            =   600
      TabIndex        =   2
      Top             =   1320
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2160
      TabIndex        =   1
      Top             =   720
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Enter number to reverse"
      Height          =   255
      Left            =   720
      TabIndex        =   4
      Top             =   240
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number"
      Height          =   255
      Left            =   720
      TabIndex        =   0
      Top             =   720
      Width           =   1215
   End
End
Attribute VB_Name = "Form5"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Reverse_Number_Click()
Call reverseNumber
End Sub
Private Function reverseNumber()
Dim rev, r, num As Integer
num = Text1.Text
While (num > 0)
temp = num Mod 10
rev = (rev * 10) + temp
num = num / 10
Wend
MsgBox "Reverse number:" & rev
End Function

Private Sub Exit_Click()
End
End Sub

