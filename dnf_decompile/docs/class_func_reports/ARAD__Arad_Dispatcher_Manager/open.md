# open

`_ZN4ARAD23Arad_Dispatcher_Manager4openEv`

`ARAD::Arad_Dispatcher_Manager::open()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818fe38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818fe38  _ZN4ARAD23Arad_Dispatcher_Manager4openEv
#           ARAD::Arad_Dispatcher_Manager::open()
# range [0x0818fe38, 0x0818fe97]
0818fe38 +0x00:  push   %ebp
0818fe39 +0x01:  mov    %esp,%ebp
0818fe3b +0x03:  push   %edi
0818fe3c +0x04:  push   %esi
0818fe3d +0x05:  push   %ebx
0818fe3e +0x06:  sub    $0x2c,%esp
0818fe41 +0x09:  movl   $0x8,(%esp)
0818fe48 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0818fe4d +0x15:  mov    %eax,%ebx
0818fe4f +0x17:  mov    %ebx,%eax
0818fe51 +0x19:  mov    %eax,(%esp)
0818fe54 +0x1c:  call   0818e9cc <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC1Ev>  ; ARAD::Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl()
0818fe59 +0x21:  jmp    0818fe73 <+0x3b>
0818fe5b +0x23:  mov    %edx,%esi
0818fe5d +0x25:  mov    %eax,%edi
0818fe5f +0x27:  mov    %ebx,(%esp)
0818fe62 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818fe67 +0x2f:  mov    %edi,%eax
0818fe69 +0x31:  mov    %esi,%edx
0818fe6b +0x33:  mov    %eax,(%esp)
0818fe6e +0x36:  call   08ae3750 <_Unwind_Resume>
0818fe73 +0x3b:  mov    %ebx,-0x1c(%ebp)
0818fe76 +0x3e:  mov    -0x1c(%ebp),%ebx
0818fe79 +0x41:  call   0818e944 <_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream+0x61>  ; global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)+0x61
0818fe7e +0x46:  mov    %ebx,0x4(%esp)
0818fe82 +0x4a:  mov    %eax,(%esp)
0818fe85 +0x4d:  call   0818fe98 <_ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE>  ; ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*)
0818fe8a +0x52:  mov    $0x0,%eax
0818fe8f +0x57:  add    $0x2c,%esp
0818fe92 +0x5a:  pop    %ebx
0818fe93 +0x5b:  pop    %esi
0818fe94 +0x5c:  pop    %edi
0818fe95 +0x5d:  pop    %ebp
0818fe96 +0x5e:  ret
0818fe97 +0x5f:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::open @ 0x818fe38

/* ARAD::Arad_Dispatcher_Manager::open() */

undefined4 ARAD::Arad_Dispatcher_Manager::open(void)

{
  Arad_Dispatcher_BuyItemCheck_Impl *this;
  Arad_Dispatcher_Manager *this_00;
  
  this = operator_new(8);
                    /* try { // try from 0818fe54 to 0818fe58 has its CatchHandler @ 0818fe5b */
  Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl(this);
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  register_dispatcher(this_00,(Arad_Dispatcher *)this);
  return 0;
}
```
