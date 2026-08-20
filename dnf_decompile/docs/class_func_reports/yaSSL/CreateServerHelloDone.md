# CreateServerHelloDone

`_ZN5yaSSL21CreateServerHelloDoneEv`

`yaSSL::CreateServerHelloDone()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747650  _ZN5yaSSL21CreateServerHelloDoneEv
#           yaSSL::CreateServerHelloDone()
# range [0x08747650, 0x0874768e]
08747650 +0x00:  push   %ebp
08747651 +0x01:  mov    %esp,%ebp
08747653 +0x03:  sub    $0x18,%esp
08747656 +0x06:  mov    %ebx,-0x8(%ebp)
08747659 +0x09:  mov    %esi,-0x4(%ebp)
0874765c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747661 +0x11:  add    $0xc25537,%ebx
08747667 +0x17:  movb   $0x0,0x4(%esp)
0874766c +0x1c:  movl   $0x8,(%esp)
08747673 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747678 +0x28:  mov    %eax,%esi
0874767a +0x2a:  mov    %eax,(%esp)
0874767d +0x2d:  call   08746e90 <_ZN5yaSSL15ServerHelloDoneC1Ev>  ; yaSSL::ServerHelloDone::ServerHelloDone()
08747682 +0x32:  mov    %esi,%eax
08747684 +0x34:  mov    -0x8(%ebp),%ebx
08747687 +0x37:  mov    -0x4(%ebp),%esi
0874768a +0x3a:  mov    %ebp,%esp
0874768c +0x3c:  pop    %ebp
0874768d +0x3d:  ret
0874768e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateServerHelloDone @ 0x8747650

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerHelloDone() */

ServerHelloDone * yaSSL::CreateServerHelloDone(void)

{
  ServerHelloDone *this;
  
  this = operator_new(8,0);
  ServerHelloDone::ServerHelloDone(this);
  return this;
}
```
