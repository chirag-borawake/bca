VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3360
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3405
   LinkTopic       =   "Form1"
   ScaleHeight     =   3360
   ScaleWidth      =   3405
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   1920
      TabIndex        =   4
      Top             =   2160
      Width           =   975
   End
   Begin VB.CommandButton Table 
      Caption         =   "Table"
      Height          =   375
      Left            =   1920
      TabIndex        =   3
      Top             =   1560
      Width           =   975
   End
   Begin VB.ListBox MulTable 
      Height          =   2010
      Left            =   360
      TabIndex        =   2
      Top             =   1080
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   2160
      TabIndex        =   1
      Text            =   " "
      Top             =   480
      Width           =   1095
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number to find out multiplication table"
      Height          =   375
      Left            =   240
      TabIndex        =   0
      Top             =   480
      Width           =   1695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim num, temp As Integer
Private Sub Exit_Click()
End
End Sub

Private Sub Table_Click()
num = Text1.Text
temp = num
For i = 1 To 10
MulTable.AddItem num
num = num + temp
Next i
End Sub
 
