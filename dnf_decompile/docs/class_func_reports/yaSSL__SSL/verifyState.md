# verifyState

`_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE`

`yaSSL::SSL::verifyState(yaSSL::ServerState)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e140  _ZN5yaSSL3SSL11verifyStateENS_11ServerStateE
#           yaSSL::SSL::verifyState(yaSSL::ServerState)
# range [0x0874e140, 0x0874e199]
0874e140 +0x00:  push   %ebp
0874e141 +0x01:  mov    %esp,%ebp
0874e143 +0x03:  sub    $0x18,%esp
0874e146 +0x06:  mov    %ebx,-0x8(%ebp)
0874e149 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e14e +0x0e:  add    $0xc1ea4a,%ebx
0874e154 +0x14:  mov    %esi,-0x4(%ebp)
0874e157 +0x17:  mov    0x8(%ebp),%esi
0874e15a +0x1a:  mov    %esi,(%esp)
0874e15d +0x1d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874e162 +0x22:  test   %eax,%eax
0874e164 +0x24:  je     0874e170 <+0x30>
0874e166 +0x26:  mov    -0x8(%ebp),%ebx
0874e169 +0x29:  mov    -0x4(%ebp),%esi
0874e16c +0x2c:  mov    %ebp,%esp
0874e16e +0x2e:  pop    %ebp
0874e16f +0x2f:  ret
0874e170 +0x30:  lea    0x8ec(%esi),%eax
0874e176 +0x36:  mov    %eax,(%esp)
0874e179 +0x39:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0874e17e +0x3e:  mov    0xc(%ebp),%edx
0874e181 +0x41:  cmp    %edx,(%eax)
0874e183 +0x43:  je     0874e166 <+0x26>
0874e185 +0x45:  mov    %esi,(%esp)
0874e188 +0x48:  call   0874e030 <_ZN5yaSSL3SSL11order_errorEv>  ; yaSSL::SSL::order_error()
0874e18d +0x4d:  mov    -0x8(%ebp),%ebx
0874e190 +0x50:  mov    -0x4(%ebp),%esi
0874e193 +0x53:  mov    %ebp,%esp
0874e195 +0x55:  pop    %ebp
0874e196 +0x56:  ret
0874e197 +0x57:  nop
0874e198 +0x58:  nop
0874e199 +0x59:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::verifyState @ 0x874e140

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::verifyState(yaSSL::ServerState) */

void __thiscall yaSSL::SSL::verifyState(SSL *this,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = GetError(this);
  if (iVar1 == 0) {
    piVar2 = (int *)States::getServer((States *)(this + 0x8ec));
    if (*piVar2 != param_2) {
      order_error(this);
      return;
    }
  }
  return;
}
```
