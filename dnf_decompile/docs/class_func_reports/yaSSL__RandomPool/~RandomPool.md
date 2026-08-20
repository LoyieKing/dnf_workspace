# ~RandomPool

`_ZN5yaSSL10RandomPoolD1Ev`

`yaSSL::RandomPool::~RandomPool()`

| 类 | 地址 |
|---|---|
| `yaSSL::RandomPool` | `0x08799000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799000  _ZN5yaSSL10RandomPoolD1Ev
#           yaSSL::RandomPool::~RandomPool()
# range [0x08799000, 0x0879903f]
08799000 +0x00:  push   %ebp
08799001 +0x01:  mov    %esp,%ebp
08799003 +0x03:  sub    $0x18,%esp
08799006 +0x06:  mov    0x8(%ebp),%eax
08799009 +0x09:  mov    %ebx,-0x8(%ebp)
0879900c +0x0c:  mov    %esi,-0x4(%ebp)
0879900f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08799014 +0x14:  add    $0xbd3b84,%ebx
0879901a +0x1a:  mov    (%eax),%esi
0879901c +0x1c:  test   %esi,%esi
0879901e +0x1e:  je     08799028 <+0x28>
08799020 +0x20:  mov    %esi,(%esp)
08799023 +0x23:  call   08767840 <_ZN8TaoCrypt7OS_SeedD1Ev>  ; TaoCrypt::OS_Seed::~OS_Seed()
08799028 +0x28:  mov    %esi,(%esp)
0879902b +0x2b:  movb   $0x0,0x4(%esp)
08799030 +0x30:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08799035 +0x35:  mov    -0x8(%ebp),%ebx
08799038 +0x38:  mov    -0x4(%ebp),%esi
0879903b +0x3b:  mov    %ebp,%esp
0879903d +0x3d:  pop    %ebp
0879903e +0x3e:  ret
0879903f +0x3f:  nop
```

## 反编译 C

```c
// yaSSL::RandomPool::~RandomPool @ 0x8799000

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::~RandomPool() */

void __thiscall yaSSL::RandomPool::~RandomPool(RandomPool *this)

{
  OS_Seed *this_00;
  
  this_00 = *(OS_Seed **)this;
  if (this_00 != (OS_Seed *)0x0) {
    TaoCrypt::OS_Seed::~OS_Seed(this_00);
  }
  operator_delete(this_00,0);
  return;
}
```
