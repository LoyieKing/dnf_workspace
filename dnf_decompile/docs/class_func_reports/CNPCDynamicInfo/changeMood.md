# changeMood

`_ZN15CNPCDynamicInfo10changeMoodEb`

`CNPCDynamicInfo::changeMood(bool)`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfo` | `0x085804b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085804b2  _ZN15CNPCDynamicInfo10changeMoodEb
#           CNPCDynamicInfo::changeMood(bool)
# range [0x085804b2, 0x0858053d]
085804b2 +0x00:  push   %ebp
085804b3 +0x01:  mov    %esp,%ebp
085804b5 +0x03:  push   %ebx
085804b6 +0x04:  sub    $0x24,%esp
085804b9 +0x07:  mov    0xc(%ebp),%eax
085804bc +0x0a:  mov    %al,-0xc(%ebp)
085804bf +0x0d:  cmpb   $0x0,-0xc(%ebp)
085804c3 +0x11:  jne    085804db <+0x29>
085804c5 +0x13:  mov    0x8(%ebp),%eax
085804c8 +0x16:  mov    0xc(%eax),%ebx
085804cb +0x19:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085804d2 +0x20:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085804d7 +0x25:  cmp    %eax,%ebx
085804d9 +0x27:  jg     085804e2 <+0x30>
085804db +0x29:  mov    $0x1,%eax
085804e0 +0x2e:  jmp    085804e7 <+0x35>
085804e2 +0x30:  mov    $0x0,%eax
085804e7 +0x35:  test   %al,%al
085804e9 +0x37:  je     0858052d <+0x7b>
085804eb +0x39:  mov    0x8(%ebp),%eax
085804ee +0x3c:  lea    0x8(%eax),%ecx
085804f1 +0x3f:  mov    0x8(%ebp),%eax
085804f4 +0x42:  lea    0x4(%eax),%edx
085804f7 +0x45:  mov    0x8(%ebp),%eax
085804fa +0x48:  mov    (%eax),%eax
085804fc +0x4a:  mov    %ecx,0x8(%esp)
08580500 +0x4e:  mov    %edx,0x4(%esp)
08580504 +0x52:  mov    %eax,(%esp)
08580507 +0x55:  call   08580f28 <_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj>  ; CNPCScript::getNextMood(ENUM_NPC_MOOD&, unsigned int&) const
0858050c +0x5a:  mov    0x8(%ebp),%edx
0858050f +0x5d:  mov    %eax,0xc(%edx)
08580512 +0x60:  mov    0x8(%ebp),%eax
08580515 +0x63:  mov    0xc(%eax),%ebx
08580518 +0x66:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0858051f +0x6d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08580524 +0x72:  lea    (%ebx,%eax,1),%edx
08580527 +0x75:  mov    0x8(%ebp),%eax
0858052a +0x78:  mov    %edx,0xc(%eax)
0858052d +0x7b:  mov    0x8(%ebp),%eax
08580530 +0x7e:  mov    %eax,(%esp)
08580533 +0x81:  call   08581910 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xa2>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xa2
08580538 +0x86:  add    $0x24,%esp
0858053b +0x89:  pop    %ebx
0858053c +0x8a:  pop    %ebp
0858053d +0x8b:  ret
```

## 反编译 C

```c
// CNPCDynamicInfo::changeMood @ 0x85804b2

/* CNPCDynamicInfo::changeMood(bool) */

void __thiscall CNPCDynamicInfo::changeMood(CNPCDynamicInfo *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (!param_1) {
    iVar1 = *(int *)(this + 0xc);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < iVar1) {
      bVar2 = false;
      goto LAB_085804e7;
    }
  }
  bVar2 = true;
LAB_085804e7:
  if (bVar2) {
    uVar4 = CNPCScript::getNextMood(*(CNPCScript **)this,this + 4,(uint *)(this + 8));
    *(undefined4 *)(this + 0xc) = uVar4;
    iVar1 = *(int *)(this + 0xc);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(this + 0xc) = iVar1 + iVar3;
  }
  getMood(this);
  return;
}
```
