# GetFinishPointTotal

`_ZN15CUserCharacInfo19GetFinishPointTotalEv`

`CUserCharacInfo::GetFinishPointTotal()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086458ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086458ce  _ZN15CUserCharacInfo19GetFinishPointTotalEv
#           CUserCharacInfo::GetFinishPointTotal()
# range [0x086458ce, 0x08645929]
086458ce +0x00:  push   %ebp
086458cf +0x01:  mov    %esp,%ebp
086458d1 +0x03:  sub    $0x28,%esp
086458d4 +0x06:  mov    0x8(%ebp),%eax
086458d7 +0x09:  mov    0x10(%eax),%eax
086458da +0x0c:  test   %eax,%eax
086458dc +0x0e:  jne    0864591b <+0x4d>
086458de +0x10:  movl   $0x5,0xc(%esp)
086458e6 +0x18:  movl   $0x26a,0x8(%esp)
086458ee +0x20:  movl   $&_ZZN15CUserCharacInfo19GetFinishPointTotalEvE19__PRETTY_FUNCTION__,0x4(%esp)
086458f6 +0x28:  lea    -0x18(%ebp),%eax
086458f9 +0x2b:  mov    %eax,(%esp)
086458fc +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08645901 +0x33:  movl   $"WARAREA CUserCharacInfo::GetFinishPointTotal() : m_selected is NULL",0x4(%esp)
08645909 +0x3b:  lea    -0x18(%ebp),%eax
0864590c +0x3e:  mov    %eax,(%esp)
0864590f +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645914 +0x46:  mov    $0x0,%eax
08645919 +0x4b:  jmp    08645927 <+0x59>
0864591b +0x4d:  mov    0x8(%ebp),%eax
0864591e +0x50:  mov    0x10(%eax),%eax
08645921 +0x53:  mov    0xe0a(%eax),%eax
08645927 +0x59:  leave
08645928 +0x5a:  ret
08645929 +0x5b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetFinishPointTotal @ 0x86458ce

/* CUserCharacInfo::GetFinishPointTotal() */

undefined4 __thiscall CUserCharacInfo::GetFinishPointTotal(CUserCharacInfo *this)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"int CUserCharacInfo::GetFinishPointTotal()",0x26a,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::GetFinishPointTotal() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a);
  }
  return uVar1;
}
```
