VERSION 5.00
Begin VB.Form Factorial 
   Caption         =   "Factorial"
   ClientHeight    =   1815
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4425
   LinkTopic       =   "Form1"
   ScaleHeight     =   1815
   ScaleWidth      =   4425
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2400
      TabIndex        =   3
      Top             =   1200
      Width           =   1095
   End
   Begin VB.CommandButton Calculate 
      Caption         =   "Calculate"
      Height          =   375
      Left            =   600
      TabIndex        =   2
      Top             =   1200
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   2880
      TabIndex        =   1
      Text            =   " "
      Top             =   600
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number to find out factiroal"
      Height          =   255
      Left            =   360
      TabIndex        =   0
      Top             =   600
      Width           =   2295
   End
End
Attribute VB_Name = "Factorial"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim fac, num As Integer
Private Sub Calculate_Click()
num = Text1.Text
fac = 1
If num = 0 Then
MsgBox "Factorial of number:" & fac
Else
For i = 1 To num
  fac = fac * i
Next i
MsgBox "Factorial of number:" & fac
End If
End Sub
Private Sub Exit_Click()
End
End Sub
