[Variables]
bgH=120
dotY=73
highlightColor=183,234,93,230

; ============================================================
; Address

[addressHeader]
Meter=String
MeterStyle=headerText
X=85
Y=38
Text=UBQ Address
ToolTipText="The UBIQ address you wish to monitor"

[address]
Meter=String
MeterStyle=subText
FontSize=10
X=r
Y=38
W=260
H=18
Text=#Addr#
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 1"]
ToolTipText="click to set UBQ Address"


; ============================================================
; Pools

[Pool]
Meter=String
MeterStyle=headerText
X=85
Y=86
Text=Mining Pool
ToolTipText="The Mining Pool you want to monitor"

[MinerPool]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=1r
Y=86
W=71
H=18
Text=MinerPool
FontSize=10
MouseOverAction=[!SetOption MinerPool StringEffect "Border"]
MouseLeaveAction=[!SetOption MinerPool StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue MinerPool InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue MaxHash InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue UbiqPool InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 2"

[MaxHash]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=80r
Y=86
W=62
H=18
Text=MaxHash
FontSize=10
MouseOverAction=[!SetOption MaxHash StringEffect "Border"]
MouseLeaveAction=[!SetOption MaxHash StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue MaxHash InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue MinerPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue UbiqPool InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 3"

[UbiqPool]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=73r
Y=86
W=64
H=18
Text=UBIQPool
FontSize=10
MouseOverAction=[!SetOption UbiqPool StringEffect "Border"]
MouseLeaveAction=[!SetOption UbiqPool StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue UbiqPool InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue MaxHash InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MinerPool InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 4"


; ============================================================

