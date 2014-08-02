VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2085
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3855
   LinkTopic       =   "Form1"
   ScaleHeight     =   2085
   ScaleWidth      =   3855
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2520
      TabIndex        =   3
      Top             =   1440
      Width           =   735
   End
   Begin VB.TextBox Text1 
      Height          =   405
      Left            =   2160
      TabIndex        =   2
      Top             =   720
      Width           =   1335
   End
   Begin VB.CommandButton Find_Sum 
      Caption         =   "Sum"
      Height          =   375
      Left            =   840
      TabIndex        =   1
      Top             =   1440
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Sum of first and last digit."
      Height          =   255
      Left            =   720
      TabIndex        =   4
      Top             =   240
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   "Entre number"
      Height          =   375
      Left            =   720
      TabIndex        =   0
      Top             =   720
      Width           =   1095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim sum, num, first, last, length As Single

Private Sub Exit_Click()
End
End Sub

Private Sub Find_Sum_Click()
num = Text1.Text
first = num Mod 10
length = Len(Text1.Text)
If length <> 1 Then
last = num \ (10 ^ (length - 1))
End If
sum = last + first
MsgBox "Sum =" & sum
End Sub
