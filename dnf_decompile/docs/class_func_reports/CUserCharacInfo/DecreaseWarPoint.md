# DecreaseWarPoint

`_ZN15CUserCharacInfo16DecreaseWarPointEi`

`CUserCharacInfo::DecreaseWarPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645aa0  _ZN15CUserCharacInfo16DecreaseWarPointEi
#           CUserCharacInfo::DecreaseWarPoint(int)
# range [0x08645aa0, 0x08645b7f]
08645aa0 +0x00:  push   %ebp
08645aa1 +0x01:  mov    %esp,%ebp
08645aa3 +0x03:  sub    $0x38,%esp
08645aa6 +0x06:  mov    0x8(%ebp),%eax
08645aa9 +0x09:  mov    0x10(%eax),%eax
08645aac +0x0c:  test   %eax,%eax
08645aae +0x0e:  jne    08645aeb <+0x4b>
08645ab0 +0x10:  movl   $0x5,0xc(%esp)
08645ab8 +0x18:  movl   $0x297,0x8(%esp)
08645ac0 +0x20:  movl   $&_ZZN15CUserCharacInfo16DecreaseWarPointEiE19__PRETTY_FUNCTION__,0x4(%esp)
08645ac8 +0x28:  lea    -0x18(%ebp),%eax
08645acb +0x2b:  mov    %eax,(%esp)
08645ace +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08645ad3 +0x33:  movl   $"WARAREA CUserCharacInfo::DecreaseWarPoint() : m_selected is NULL",0x4(%esp)
08645adb +0x3b:  lea    -0x18(%ebp),%eax
08645ade +0x3e:  mov    %eax,(%esp)
08645ae1 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645ae6 +0x46:  jmp    08645b7e <+0xde>
08645aeb +0x4b:  cmpl   $0x0,0xc(%ebp)
08645aef +0x4f:  jg     08645b03 <+0x63>
08645af1 +0x51:  mov    0x8(%ebp),%eax
08645af4 +0x54:  mov    0x10(%eax),%eax
08645af7 +0x57:  movl   $0x0,0xe0a(%eax)
08645b01 +0x61:  jmp    08645b3e <+0x9e>
08645b03 +0x63:  mov    0x8(%ebp),%eax
08645b06 +0x66:  mov    0x10(%eax),%eax
08645b09 +0x69:  mov    0x8(%ebp),%edx
08645b0c +0x6c:  mov    0x10(%edx),%edx
08645b0f +0x6f:  mov    0xe0a(%edx),%edx
08645b15 +0x75:  sub    0xc(%ebp),%edx
08645b18 +0x78:  mov    %edx,0xe0a(%eax)
08645b1e +0x7e:  mov    0x8(%ebp),%eax
08645b21 +0x81:  mov    0x10(%eax),%eax
08645b24 +0x84:  mov    0xe0a(%eax),%eax
08645b2a +0x8a:  test   %eax,%eax
08645b2c +0x8c:  jns    08645b3e <+0x9e>
08645b2e +0x8e:  mov    0x8(%ebp),%eax
08645b31 +0x91:  mov    0x10(%eax),%eax
08645b34 +0x94:  movl   $0x0,0xe0a(%eax)
08645b3e +0x9e:  mov    0x8(%ebp),%eax
08645b41 +0xa1:  mov    0x10(%eax),%eax
08645b44 +0xa4:  mov    0xe0a(%eax),%edx
08645b4a +0xaa:  mov    0x8(%ebp),%eax
08645b4d +0xad:  mov    0x10(%eax),%eax
08645b50 +0xb0:  mov    0xe06(%eax),%eax
08645b56 +0xb6:  mov    0x8(%ebp),%ecx
08645b59 +0xb9:  add    $0x79700,%ecx
08645b5f +0xbf:  movl   $0x3,0x10(%esp)
08645b67 +0xc7:  mov    %edx,0xc(%esp)
08645b6b +0xcb:  mov    %eax,0x8(%esp)
08645b6f +0xcf:  mov    0xc(%ebp),%eax
08645b72 +0xd2:  mov    %eax,0x4(%esp)
08645b76 +0xd6:  mov    %ecx,(%esp)
08645b79 +0xd9:  call   08684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>  ; cUserHistoryLog::FPSub(int, int, int, eFPSubReason)
08645b7e +0xde:  leave
08645b7f +0xdf:  ret
```

## 反编译 C

```c
// CUserCharacInfo::DecreaseWarPoint @ 0x8645aa0

/* CUserCharacInfo::DecreaseWarPoint(int) */

void __thiscall CUserCharacInfo::DecreaseWarPoint(CUserCharacInfo *this,int param_1)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::DecreaseWarPoint(int)",0x297,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::DecreaseWarPoint() : m_selected is NULL");
  }
  else {
    if (param_1 < 1) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
    }
    else {
      *(int *)(*(int *)(this + 0x10) + 0xe0a) = *(int *)(*(int *)(this + 0x10) + 0xe0a) - param_1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe0a) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
      }
    }
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),param_1,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),3);
  }
  return;
}
```
