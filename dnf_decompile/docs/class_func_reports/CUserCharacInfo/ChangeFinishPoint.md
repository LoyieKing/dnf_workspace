# ChangeFinishPoint

`_ZN15CUserCharacInfo17ChangeFinishPointEi`

`CUserCharacInfo::ChangeFinishPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086457c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086457c0  _ZN15CUserCharacInfo17ChangeFinishPointEi
#           CUserCharacInfo::ChangeFinishPoint(int)
# range [0x086457c0, 0x08645865]
086457c0 +0x00:  push   %ebp
086457c1 +0x01:  mov    %esp,%ebp
086457c3 +0x03:  sub    $0x28,%esp
086457c6 +0x06:  mov    0x8(%ebp),%eax
086457c9 +0x09:  mov    0x10(%eax),%eax
086457cc +0x0c:  test   %eax,%eax
086457ce +0x0e:  jne    08645808 <+0x48>
086457d0 +0x10:  movl   $0x5,0xc(%esp)
086457d8 +0x18:  movl   $0x24d,0x8(%esp)
086457e0 +0x20:  movl   $&_ZZN15CUserCharacInfo17ChangeFinishPointEiE19__PRETTY_FUNCTION__,0x4(%esp)
086457e8 +0x28:  lea    -0x18(%ebp),%eax
086457eb +0x2b:  mov    %eax,(%esp)
086457ee +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086457f3 +0x33:  movl   $"WARAREA CUserCharacInfo::ChangeFinishPoint() : m_selected is NULL",0x4(%esp)
086457fb +0x3b:  lea    -0x18(%ebp),%eax
086457fe +0x3e:  mov    %eax,(%esp)
08645801 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645806 +0x46:  jmp    08645864 <+0xa4>
08645808 +0x48:  cmpl   $0x0,0xc(%ebp)
0864580c +0x4c:  jle    08645829 <+0x69>
0864580e +0x4e:  mov    0x8(%ebp),%eax
08645811 +0x51:  mov    0x10(%eax),%eax
08645814 +0x54:  mov    0x8(%ebp),%edx
08645817 +0x57:  mov    0x10(%edx),%edx
0864581a +0x5a:  mov    0xe0a(%edx),%edx
08645820 +0x60:  add    0xc(%ebp),%edx
08645823 +0x63:  mov    %edx,0xe0a(%eax)
08645829 +0x69:  mov    0x8(%ebp),%eax
0864582c +0x6c:  mov    0x10(%eax),%eax
0864582f +0x6f:  mov    0x8(%ebp),%edx
08645832 +0x72:  mov    0x10(%edx),%edx
08645835 +0x75:  mov    0xe06(%edx),%edx
0864583b +0x7b:  add    0xc(%ebp),%edx
0864583e +0x7e:  mov    %edx,0xe06(%eax)
08645844 +0x84:  mov    0x8(%ebp),%eax
08645847 +0x87:  mov    0x10(%eax),%eax
0864584a +0x8a:  mov    0xe06(%eax),%eax
08645850 +0x90:  test   %eax,%eax
08645852 +0x92:  jns    08645864 <+0xa4>
08645854 +0x94:  mov    0x8(%ebp),%eax
08645857 +0x97:  mov    0x10(%eax),%eax
0864585a +0x9a:  movl   $0x0,0xe06(%eax)
08645864 +0xa4:  leave
08645865 +0xa5:  ret
```

## 反编译 C

```c
// CUserCharacInfo::ChangeFinishPoint @ 0x86457c0

/* CUserCharacInfo::ChangeFinishPoint(int) */

void __thiscall CUserCharacInfo::ChangeFinishPoint(CUserCharacInfo *this,int param_1)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::ChangeFinishPoint(int)",0x24d,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::ChangeFinishPoint() : m_selected is NULL");
  }
  else {
    if (0 < param_1) {
      *(int *)(*(int *)(this + 0x10) + 0xe0a) = *(int *)(*(int *)(this + 0x10) + 0xe0a) + param_1;
    }
    *(int *)(*(int *)(this + 0x10) + 0xe06) = *(int *)(*(int *)(this + 0x10) + 0xe06) + param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe06) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe06) = 0;
    }
  }
  return;
}
```
