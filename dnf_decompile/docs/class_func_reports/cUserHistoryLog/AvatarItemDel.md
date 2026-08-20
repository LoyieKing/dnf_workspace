# AvatarItemDel

`_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason`

`cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086846fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086846fa  _ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason
#           cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason)
# range [0x086846fa, 0x0868479b]
086846fa +0x00:  push   %ebp
086846fb +0x01:  mov    %esp,%ebp
086846fd +0x03:  push   %ebx
086846fe +0x04:  sub    $0x24,%esp
08684701 +0x07:  cmpl   $0x0,0x18(%ebp)
08684705 +0x0b:  je     0868470d <+0x13>
08684707 +0x0d:  cmpl   $0x1,0x18(%ebp)
0868470b +0x11:  jne    08684761 <+0x67>
0868470d +0x13:  mov    0x8(%ebp),%eax
08684710 +0x16:  add    $0x22,%eax
08684713 +0x19:  movzbl (%eax),%eax
08684716 +0x1c:  test   %al,%al
08684718 +0x1e:  je     08684794 <+0x9a>
0868471a +0x20:  mov    0x8(%ebp),%eax
0868471d +0x23:  lea    0x4(%eax),%ebx
08684720 +0x26:  mov    0x8(%ebp),%eax
08684723 +0x29:  lea    0x22(%eax),%ecx
08684726 +0x2c:  mov    0x18(%ebp),%edx
08684729 +0x2f:  mov    0x8(%ebp),%eax
0868472c +0x32:  mov    (%eax),%eax
0868472e +0x34:  mov    %ebx,0x1c(%esp)
08684732 +0x38:  mov    %ecx,0x18(%esp)
08684736 +0x3c:  mov    %edx,0x14(%esp)
0868473a +0x40:  mov    0x14(%ebp),%edx
0868473d +0x43:  mov    %edx,0x10(%esp)
08684741 +0x47:  mov    0x10(%ebp),%edx
08684744 +0x4a:  mov    %edx,0xc(%esp)
08684748 +0x4e:  mov    0xc(%ebp),%edx
0868474b +0x51:  mov    %edx,0x8(%esp)
0868474f +0x55:  movl   $"Avatar-,%d,%d,%s,%d,\"%s\",\"%s\"",0x4(%esp)
08684757 +0x5d:  mov    %eax,(%esp)
0868475a +0x60:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868475f +0x65:  jmp    08684795 <+0x9b>
08684761 +0x67:  mov    0x18(%ebp),%edx
08684764 +0x6a:  mov    0x8(%ebp),%eax
08684767 +0x6d:  mov    (%eax),%eax
08684769 +0x6f:  mov    %edx,0x14(%esp)
0868476d +0x73:  mov    0x14(%ebp),%edx
08684770 +0x76:  mov    %edx,0x10(%esp)
08684774 +0x7a:  mov    0x10(%ebp),%edx
08684777 +0x7d:  mov    %edx,0xc(%esp)
0868477b +0x81:  mov    0xc(%ebp),%edx
0868477e +0x84:  mov    %edx,0x8(%esp)
08684782 +0x88:  movl   $"Avatar-,%d,%d,%s,%d",0x4(%esp)
0868478a +0x90:  mov    %eax,(%esp)
0868478d +0x93:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684792 +0x98:  jmp    08684795 <+0x9b>
08684794 +0x9a:  nop
08684795 +0x9b:  add    $0x24,%esp
08684798 +0x9e:  pop    %ebx
08684799 +0x9f:  pop    %ebp
0868479a +0xa0:  ret
0868479b +0xa1:  nop
```

## 反编译 C

```c
// cUserHistoryLog::AvatarItemDel @ 0x86846fa

/* cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason) */

void __thiscall
cUserHistoryLog::AvatarItemDel
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          int param_5)

{
  if ((param_5 == 0) || (param_5 == 1)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CUser::LogHistory(*(CUser **)this,"Avatar-,%d,%d,%s,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                        param_5,this + 0x22,this + 4);
    }
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Avatar-,%d,%d,%s,%d",param_1,param_2,param_3,param_5);
  }
  return;
}
```
