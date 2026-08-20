# AvatarItemAdd

`_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason`

`cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684652` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684652  _ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason
#           cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)
# range [0x08684652, 0x086846f9]
08684652 +0x00:  push   %ebp
08684653 +0x01:  mov    %esp,%ebp
08684655 +0x03:  push   %ebx
08684656 +0x04:  sub    $0x24,%esp
08684659 +0x07:  cmpl   $0x1,0x18(%ebp)
0868465d +0x0b:  je     0868466b <+0x19>
0868465f +0x0d:  cmpl   $0x3,0x18(%ebp)
08684663 +0x11:  je     0868466b <+0x19>
08684665 +0x13:  cmpl   $0x4,0x18(%ebp)
08684669 +0x17:  jne    086846bf <+0x6d>
0868466b +0x19:  mov    0x8(%ebp),%eax
0868466e +0x1c:  add    $0x22,%eax
08684671 +0x1f:  movzbl (%eax),%eax
08684674 +0x22:  test   %al,%al
08684676 +0x24:  je     086846f2 <+0xa0>
08684678 +0x26:  mov    0x8(%ebp),%eax
0868467b +0x29:  lea    0x4(%eax),%ebx
0868467e +0x2c:  mov    0x8(%ebp),%eax
08684681 +0x2f:  lea    0x22(%eax),%ecx
08684684 +0x32:  mov    0x18(%ebp),%edx
08684687 +0x35:  mov    0x8(%ebp),%eax
0868468a +0x38:  mov    (%eax),%eax
0868468c +0x3a:  mov    %ebx,0x1c(%esp)
08684690 +0x3e:  mov    %ecx,0x18(%esp)
08684694 +0x42:  mov    %edx,0x14(%esp)
08684698 +0x46:  mov    0x14(%ebp),%edx
0868469b +0x49:  mov    %edx,0x10(%esp)
0868469f +0x4d:  mov    0x10(%ebp),%edx
086846a2 +0x50:  mov    %edx,0xc(%esp)
086846a6 +0x54:  mov    0xc(%ebp),%edx
086846a9 +0x57:  mov    %edx,0x8(%esp)
086846ad +0x5b:  movl   $"Avatar+,%d,%d,%s,%d,\"%s\",\"%s\"",0x4(%esp)
086846b5 +0x63:  mov    %eax,(%esp)
086846b8 +0x66:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086846bd +0x6b:  jmp    086846f3 <+0xa1>
086846bf +0x6d:  mov    0x18(%ebp),%edx
086846c2 +0x70:  mov    0x8(%ebp),%eax
086846c5 +0x73:  mov    (%eax),%eax
086846c7 +0x75:  mov    %edx,0x14(%esp)
086846cb +0x79:  mov    0x14(%ebp),%edx
086846ce +0x7c:  mov    %edx,0x10(%esp)
086846d2 +0x80:  mov    0x10(%ebp),%edx
086846d5 +0x83:  mov    %edx,0xc(%esp)
086846d9 +0x87:  mov    0xc(%ebp),%edx
086846dc +0x8a:  mov    %edx,0x8(%esp)
086846e0 +0x8e:  movl   $"Avatar+,%d,%d,\"%s\",%d",0x4(%esp)
086846e8 +0x96:  mov    %eax,(%esp)
086846eb +0x99:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086846f0 +0x9e:  jmp    086846f3 <+0xa1>
086846f2 +0xa0:  nop
086846f3 +0xa1:  add    $0x24,%esp
086846f6 +0xa4:  pop    %ebx
086846f7 +0xa5:  pop    %ebp
086846f8 +0xa6:  ret
086846f9 +0xa7:  nop
```

## 反编译 C

```c
// cUserHistoryLog::AvatarItemAdd @ 0x8684652

/* cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason) */

void __thiscall
cUserHistoryLog::AvatarItemAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          int param_5)

{
  if (((param_5 == 1) || (param_5 == 3)) || (param_5 == 4)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CUser::LogHistory(*(CUser **)this,"Avatar+,%d,%d,%s,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                        param_5,this + 0x22,this + 4);
    }
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Avatar+,%d,%d,\"%s\",%d",param_1,param_2,param_3,param_5);
  }
  return;
}
```
