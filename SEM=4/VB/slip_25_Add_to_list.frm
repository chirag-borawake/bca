VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3735
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   3735
   StartUpPosition =   3  'Windows Default
   Begin VB.ListBox List1 
      Height          =   1230
      Left            =   240
      TabIndex        =   4
      Top             =   1320
      Width           =   1215
   End
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   2040
      TabIndex        =   3
      Top             =   2040
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   1920
      TabIndex        =   1
      Text            =   " "
      Top             =   360
      Width           =   1215
   End
   Begin VB.CommandButton Add_To_List_Box 
      Caption         =   "Add to list box"
      Height          =   495
      Left            =   2040
      TabIndex        =   0
      Top             =   1320
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Enter text"
      Height          =   255
      Left            =   480
      TabIndex        =   2
      Top             =   480
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim txt As String

Private Sub Add_To_List_Box_Click()
List1.AddItem txt
End Sub

Private Sub Exit_Click()
End
End Sub

Private Sub Text1_Change()
txt = Text1.Text
End Sub
