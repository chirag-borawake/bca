VERSION 5.00
Begin VB.Form Form3 
   Caption         =   "Form3"
   ClientHeight    =   1740
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3810
   LinkTopic       =   "Form3"
   ScaleHeight     =   1740
   ScaleWidth      =   3810
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2640
      TabIndex        =   1
      Top             =   840
      Width           =   735
   End
   Begin VB.CommandButton Find_Armstromg_Number 
      Caption         =   "Armstrong no"
      Height          =   375
      Left            =   600
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Armstromg numbers between 1 to 1000"
      Height          =   255
      Left            =   600
      TabIndex        =   2
      Top             =   240
      Width           =   3015
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Exit_Click()
End
End Sub
Private Function display()
Dim i, r, num, sum As Integer
For i = 2 To 1000
sum = 0
num = i
While (num > 0)
r = num Mod 10
sum = sum + (r * r * r)
num = num \ 10
Wend
If i = sum Then
Print i
End If
Next i
End Function

Private Sub Find_Armstromg_Number_Click()
Call display
End Sub
