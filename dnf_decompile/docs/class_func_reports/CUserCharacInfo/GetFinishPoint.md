# GetFinishPoint

`_ZN15CUserCharacInfo14GetFinishPointEv`

`CUserCharacInfo::GetFinishPoint()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645764` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645764  _ZN15CUserCharacInfo14GetFinishPointEv
#           CUserCharacInfo::GetFinishPoint()
# range [0x08645764, 0x086457bf]
08645764 +0x00:  push   %ebp
08645765 +0x01:  mov    %esp,%ebp
08645767 +0x03:  sub    $0x28,%esp
0864576a +0x06:  mov    0x8(%ebp),%eax
0864576d +0x09:  mov    0x10(%eax),%eax
08645770 +0x0c:  test   %eax,%eax
08645772 +0x0e:  je     08645782 <+0x1e>
08645774 +0x10:  mov    0x8(%ebp),%eax
08645777 +0x13:  mov    0x10(%eax),%eax
0864577a +0x16:  mov    0xe06(%eax),%eax
08645780 +0x1c:  jmp    086457bd <+0x59>
08645782 +0x1e:  movl   $0x5,0xc(%esp)
0864578a +0x26:  movl   $0x244,0x8(%esp)
08645792 +0x2e:  movl   $&_ZZN15CUserCharacInfo14GetFinishPointEvE19__PRETTY_FUNCTION__,0x4(%esp)
0864579a +0x36:  lea    -0x18(%ebp),%eax
0864579d +0x39:  mov    %eax,(%esp)
086457a0 +0x3c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086457a5 +0x41:  movl   $"WARAREA CUserCharacInfo::GetFinishPoint() : m_selected is NULL",0x4(%esp)
086457ad +0x49:  lea    -0x18(%ebp),%eax
086457b0 +0x4c:  mov    %eax,(%esp)
086457b3 +0x4f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086457b8 +0x54:  mov    $0x0,%eax
086457bd +0x59:  leave
086457be +0x5a:  ret
086457bf +0x5b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetFinishPoint @ 0x8645764

/* CUserCharacInfo::GetFinishPoint() */

undefined4 __thiscall CUserCharacInfo::GetFinishPoint(CUserCharacInfo *this)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"int CUserCharacInfo::GetFinishPoint()",0x244,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::GetFinishPoint() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe06);
  }
  return uVar1;
}
```
