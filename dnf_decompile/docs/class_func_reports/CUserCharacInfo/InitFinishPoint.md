# InitFinishPoint

`_ZN15CUserCharacInfo15InitFinishPointEv`

`CUserCharacInfo::InitFinishPoint()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864592a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864592a  _ZN15CUserCharacInfo15InitFinishPointEv
#           CUserCharacInfo::InitFinishPoint()
# range [0x0864592a, 0x086459c3]
0864592a +0x00:  push   %ebp
0864592b +0x01:  mov    %esp,%ebp
0864592d +0x03:  sub    $0x28,%esp
08645930 +0x06:  mov    0x8(%ebp),%eax
08645933 +0x09:  mov    0x10(%eax),%eax
08645936 +0x0c:  test   %eax,%eax
08645938 +0x0e:  je     086459c2 <+0x98>
0864593e +0x14:  mov    0x8(%ebp),%eax
08645941 +0x17:  mov    0x10(%eax),%eax
08645944 +0x1a:  movl   $0x0,0xe06(%eax)
0864594e +0x24:  mov    0x8(%ebp),%eax
08645951 +0x27:  mov    0x10(%eax),%eax
08645954 +0x2a:  movl   $0x0,0xe0a(%eax)
0864595e +0x34:  mov    0x8(%ebp),%eax
08645961 +0x37:  mov    0x10(%eax),%eax
08645964 +0x3a:  add    $0xe0e,%eax
08645969 +0x3f:  movl   $0x14,0x8(%esp)
08645971 +0x47:  movl   $0x0,0x4(%esp)
08645979 +0x4f:  mov    %eax,(%esp)
0864597c +0x52:  call   0807dcc0 <_init+0x5b8>
08645981 +0x57:  mov    0x8(%ebp),%eax
08645984 +0x5a:  mov    0x10(%eax),%eax
08645987 +0x5d:  mov    0xe0a(%eax),%edx
0864598d +0x63:  mov    0x8(%ebp),%eax
08645990 +0x66:  mov    0x10(%eax),%eax
08645993 +0x69:  mov    0xe06(%eax),%eax
08645999 +0x6f:  mov    0x8(%ebp),%ecx
0864599c +0x72:  add    $0x79700,%ecx
086459a2 +0x78:  movl   $0x1,0x10(%esp)
086459aa +0x80:  mov    %edx,0xc(%esp)
086459ae +0x84:  mov    %eax,0x8(%esp)
086459b2 +0x88:  movl   $0x0,0x4(%esp)
086459ba +0x90:  mov    %ecx,(%esp)
086459bd +0x93:  call   08684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>  ; cUserHistoryLog::FPSub(int, int, int, eFPSubReason)
086459c2 +0x98:  leave
086459c3 +0x99:  ret
```

## 反编译 C

```c
// CUserCharacInfo::InitFinishPoint @ 0x864592a

/* CUserCharacInfo::InitFinishPoint() */

void __thiscall CUserCharacInfo::InitFinishPoint(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe06) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
    memset((void *)(*(int *)(this + 0x10) + 0xe0e),0,0x14);
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),0,*(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),1);
  }
  return;
}
```
