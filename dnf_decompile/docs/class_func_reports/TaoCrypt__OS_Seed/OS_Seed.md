# OS_Seed

`_ZN8TaoCrypt7OS_SeedC1Ev`

`TaoCrypt::OS_Seed::OS_Seed()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::OS_Seed` | `0x08767870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767870  _ZN8TaoCrypt7OS_SeedC1Ev
#           TaoCrypt::OS_Seed::OS_Seed()
# range [0x08767870, 0x087678de]
08767870 +0x00:  push   %ebp
08767871 +0x01:  mov    %esp,%ebp
08767873 +0x03:  sub    $0x18,%esp
08767876 +0x06:  mov    %ebx,-0x8(%ebp)
08767879 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0876787e +0x0e:  add    $0xc0531a,%ebx
08767884 +0x14:  mov    %esi,-0x4(%ebp)
08767887 +0x17:  mov    0x8(%ebp),%esi
0876788a +0x1a:  movl   $0x0,0x4(%esi)
08767891 +0x21:  lea    -0x66776b(%ebx),%eax
08767897 +0x27:  movl   $0x0,0x4(%esp)
0876789f +0x2f:  mov    %eax,(%esp)
087678a2 +0x32:  call   0807d900 <_init+0x1f8>
087678a7 +0x37:  cmp    $0xffffffff,%eax
087678aa +0x3a:  mov    %eax,(%esi)
087678ac +0x3c:  je     087678b8 <+0x48>
087678ae +0x3e:  mov    -0x8(%ebp),%ebx
087678b1 +0x41:  mov    -0x4(%ebp),%esi
087678b4 +0x44:  mov    %ebp,%esp
087678b6 +0x46:  pop    %ebp
087678b7 +0x47:  ret
087678b8 +0x48:  lea    -0x66775e(%ebx),%eax
087678be +0x4e:  movl   $0x0,0x4(%esp)
087678c6 +0x56:  mov    %eax,(%esp)
087678c9 +0x59:  call   0807d900 <_init+0x1f8>
087678ce +0x5e:  cmp    $0xffffffff,%eax
087678d1 +0x61:  mov    %eax,(%esi)
087678d3 +0x63:  jne    087678ae <+0x3e>
087678d5 +0x65:  movl   $0x3eb,0x4(%esi)
087678dc +0x6c:  jmp    087678ae <+0x3e>
087678de +0x6e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::OS_Seed::OS_Seed @ 0x8767870

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::OS_Seed() */

void __thiscall TaoCrypt::OS_Seed::OS_Seed(OS_Seed *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  iVar1 = ::open("/dev/urandom",0);
  *(int *)this = iVar1;
  if (iVar1 == -1) {
    iVar1 = ::open("/dev/random",0);
    *(int *)this = iVar1;
    if (iVar1 == -1) {
      *(undefined4 *)(this + 4) = 0x3eb;
    }
  }
  return;
}
```
