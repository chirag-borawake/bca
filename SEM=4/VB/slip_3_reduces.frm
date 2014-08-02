VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   1905
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3495
   LinkTopic       =   "Form1"
   ScaleHeight     =   1905
   ScaleWidth      =   3495
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton ExitButton 
      Caption         =   "Exit"
      Height          =   375
      Left            =   1680
      TabIndex        =   3
      Top             =   1320
      Width           =   975
   End
   Begin VB.CommandButton ReduceButton 
      Caption         =   "Reduce"
      Height          =   375
      Left            =   240
      TabIndex        =   2
      Top             =   1320
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BeginProperty DataFormat 
         Type            =   1
         Format          =   "0"
         HaveTrueFalseNull=   0
         FirstDayOfWeek  =   0
         FirstWeekOfYear =   0
         LCID            =   1033
         SubFormatType   =   1
      EndProperty
      Height          =   285
      Left            =   1680
      TabIndex        =   1
      Top             =   840
      Width           =   975
   End
   Begin VB.Label Label2 
      Caption         =   "Reduce number to single digit."
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   360
      Width           =   2175
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number:"
      Height          =   255
      Left            =   360
      TabIndex        =   0
      Top             =   840
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub ReduceButton_Click()
Dim num As Integer
num = Text1.Text
While (Len(Trim(num)) <> 1)
num = findSum(num)
Wend
MsgBox "Reduce number is:" & num
End Sub

Private Function findSum(num As Integer)
Dim sum As Integer
While (num > 0)
sum = sum + (num Mod 10)
num = num \ 10
Wend
findSum = sum
End Function

Private Sub ExitButton_Click()
End
End Sub


