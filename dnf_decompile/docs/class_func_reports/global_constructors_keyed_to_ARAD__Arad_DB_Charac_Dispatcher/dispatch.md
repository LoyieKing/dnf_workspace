# dispatch

`_GLOBAL__I__ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream`

`global constructors keyed to ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_DB_Charac_Dispatcher` | `0x08184838` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184838  _GLOBAL__I__ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream
#           global constructors keyed to ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)
# range [0x08184838, 0x081848a7]
08184838 +0x00:  push   %ebp
08184839 +0x01:  mov    %esp,%ebp
0818483b +0x03:  sub    $0x18,%esp
0818483e +0x06:  movl   $0xffff,0x4(%esp)
08184846 +0x0e:  movl   $0x1,(%esp)
0818484d +0x15:  call   081847f8 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08184852 +0x1a:  leave
08184853 +0x1b:  ret
08184854 +0x1c:  push   %ebp
08184855 +0x1d:  mov    %esp,%ebp
08184857 +0x1f:  sub    $0x28,%esp
0818485a +0x22:  movl   $0x5354,0x4(%esp)
08184862 +0x2a:  mov    0x8(%ebp),%eax
08184865 +0x2d:  mov    %eax,(%esp)
08184868 +0x30:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0818486d +0x35:  xor    $0x1,%eax
08184870 +0x38:  test   %al,%al
08184872 +0x3a:  je     0818487b <+0x43>
08184874 +0x3c:  mov    $0x0,%eax
08184879 +0x41:  jmp    081848a5 <+0x6d>
0818487b +0x43:  mov    0x8(%ebp),%eax
0818487e +0x46:  mov    0x8(%eax),%eax
08184881 +0x49:  mov    %eax,%edx
08184883 +0x4b:  mov    0x8(%ebp),%eax
08184886 +0x4e:  mov    0x10(%eax),%eax
08184889 +0x51:  lea    (%edx,%eax,1),%eax
0818488c +0x54:  mov    %eax,-0xc(%ebp)
0818488f +0x57:  movl   $0x5354,0x4(%esp)
08184897 +0x5f:  mov    0x8(%ebp),%eax
0818489a +0x62:  mov    %eax,(%esp)
0818489d +0x65:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
081848a2 +0x6a:  mov    -0xc(%ebp),%eax
081848a5 +0x6d:  leave
081848a6 +0x6e:  ret
081848a7 +0x6f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8184838

/* ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*) */

void ARAD::Arad_DB_Charac_Dispatcher::_GLOBAL__I_dispatch(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
