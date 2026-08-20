# CalcurateManageLevel

`_ZN5CUser20CalcurateManageLevelEv`

`CUser::CalcurateManageLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690026` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690026  _ZN5CUser20CalcurateManageLevelEv
#           CUser::CalcurateManageLevel()
# range [0x08690026, 0x08690097]
08690026 +0x00:  push   %ebp
08690027 +0x01:  mov    %esp,%ebp
08690029 +0x03:  push   %ebx
0869002a +0x04:  sub    $0x24,%esp
0869002d +0x07:  mov    0x8(%ebp),%eax
08690030 +0x0a:  mov    %eax,(%esp)
08690033 +0x0d:  call   0868ffa0 <_ZN5CUser20CalcurateManagePointEv>  ; CUser::CalcurateManagePoint()
08690038 +0x12:  mov    0x8(%ebp),%eax
0869003b +0x15:  mov    %eax,(%esp)
0869003e +0x18:  call   0868fe10 <_ZN5CUser14GetManagePointEv>  ; CUser::GetManagePoint()
08690043 +0x1d:  mov    %eax,%ebx
08690045 +0x1f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0869004a +0x24:  mov    0x6394(%eax),%eax
08690050 +0x2a:  mov    %ebx,0x4(%esp)
08690054 +0x2e:  mov    %eax,(%esp)
08690057 +0x31:  call   088e0ed4 <_ZN18CharacManageScript8GetLevelEi>  ; CharacManageScript::GetLevel(int)
0869005c +0x36:  mov    %eax,-0x10(%ebp)
0869005f +0x39:  movb   $0x0,-0x9(%ebp)
08690063 +0x3d:  mov    0x8(%ebp),%eax
08690066 +0x40:  mov    %eax,(%esp)
08690069 +0x43:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
0869006e +0x48:  cmp    -0x10(%ebp),%eax
08690071 +0x4b:  setl   %al
08690074 +0x4e:  test   %al,%al
08690076 +0x50:  je     0869007c <+0x56>
08690078 +0x52:  movb   $0x1,-0x9(%ebp)
0869007c +0x56:  mov    -0x10(%ebp),%eax
0869007f +0x59:  mov    %eax,0x4(%esp)
08690083 +0x5d:  mov    0x8(%ebp),%eax
08690086 +0x60:  mov    %eax,(%esp)
08690089 +0x63:  call   0868fe2c <_ZN5CUser14SetManageLevelEi>  ; CUser::SetManageLevel(int)
0869008e +0x68:  movzbl -0x9(%ebp),%eax
08690092 +0x6c:  add    $0x24,%esp
08690095 +0x6f:  pop    %ebx
08690096 +0x70:  pop    %ebp
08690097 +0x71:  ret
```

## 反编译 C

```c
// CUser::CalcurateManageLevel @ 0x8690026

/* CUser::CalcurateManageLevel() */

bool __thiscall CUser::CalcurateManageLevel(CUser *this)

{
  int iVar1;
  int iVar2;
  
  CalcurateManagePoint(this);
  iVar1 = GetManagePoint(this);
  iVar2 = G_CDataManager();
  iVar1 = CharacManageScript::GetLevel(*(CharacManageScript **)(iVar2 + 0x6394),iVar1);
  iVar2 = GetManageLevel(this);
  SetManageLevel(this,iVar1);
  return iVar2 < iVar1;
}
```
