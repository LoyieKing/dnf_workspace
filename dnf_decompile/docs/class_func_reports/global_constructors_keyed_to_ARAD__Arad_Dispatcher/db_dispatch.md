# db_dispatch

`_GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream`

`global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_Dispatcher` | `0x0818e8e3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818e8e3  _GLOBAL__I__ZN4ARAD15Arad_Dispatcher11db_dispatchEiiP6Stream
#           global constructors keyed to ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*)
# range [0x0818e8e3, 0x0818e9b7]
0818e8e3 +0x00:  push   %ebp
0818e8e4 +0x01:  mov    %esp,%ebp
0818e8e6 +0x03:  sub    $0x18,%esp
0818e8e9 +0x06:  movl   $0xffff,0x4(%esp)
0818e8f1 +0x0e:  movl   $0x1,(%esp)
0818e8f8 +0x15:  call   0818e8a3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0818e8fd +0x1a:  leave
0818e8fe +0x1b:  ret
0818e8ff +0x1c:  nop
0818e900 +0x1d:  push   %ebp
0818e901 +0x1e:  mov    %esp,%ebp
0818e903 +0x20:  sub    $0x18,%esp
0818e906 +0x23:  mov    0x8(%ebp),%eax
0818e909 +0x26:  movl   $&_ZTVN4ARAD15Arad_DispatcherE+0x8,(%eax)
0818e90f +0x2c:  mov    $0x0,%eax
0818e914 +0x31:  test   %al,%al
0818e916 +0x33:  je     0818e923 <+0x40>
0818e918 +0x35:  mov    0x8(%ebp),%eax
0818e91b +0x38:  mov    %eax,(%esp)
0818e91e +0x3b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818e923 +0x40:  leave
0818e924 +0x41:  ret
0818e925 +0x42:  nop
0818e926 +0x43:  push   %ebp
0818e927 +0x44:  mov    %esp,%ebp
0818e929 +0x46:  sub    $0x18,%esp
0818e92c +0x49:  mov    0x8(%ebp),%eax
0818e92f +0x4c:  mov    %eax,(%esp)
0818e932 +0x4f:  call   0818e900 <+0x1d>
0818e937 +0x54:  mov    0x8(%ebp),%eax
0818e93a +0x57:  mov    %eax,(%esp)
0818e93d +0x5a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818e942 +0x5f:  leave
0818e943 +0x60:  ret
0818e944 +0x61:  push   %ebp
0818e945 +0x62:  mov    %esp,%ebp
0818e947 +0x64:  sub    $0x8,%esp
0818e94a +0x67:  call   0818e956 <+0x73>
0818e94f +0x6c:  mov    &_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE3m_pE,%eax
0818e954 +0x71:  leave
0818e955 +0x72:  ret
0818e956 +0x73:  push   %ebp
0818e957 +0x74:  mov    %esp,%ebp
0818e959 +0x76:  push   %edi
0818e95a +0x77:  push   %esi
0818e95b +0x78:  push   %ebx
0818e95c +0x79:  sub    $0x1c,%esp
0818e95f +0x7c:  mov    &_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE3m_pE,%eax
0818e964 +0x81:  test   %eax,%eax
0818e966 +0x83:  jne    0818e9ac <+0xc9>
0818e968 +0x85:  mov    &_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE3m_pE,%eax
0818e96d +0x8a:  test   %eax,%eax
0818e96f +0x8c:  jne    0818e9ad <+0xca>
0818e971 +0x8e:  movl   $0x1aa0,(%esp)
0818e978 +0x95:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0818e97d +0x9a:  mov    %eax,%ebx
0818e97f +0x9c:  mov    %ebx,%eax
0818e981 +0x9e:  mov    %eax,(%esp)
0818e984 +0xa1:  call   0818fdd4 <_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev>  ; ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager()
0818e989 +0xa6:  jmp    0818e9a3 <+0xc0>
0818e98b +0xa8:  mov    %edx,%esi
0818e98d +0xaa:  mov    %eax,%edi
0818e98f +0xac:  mov    %ebx,(%esp)
0818e992 +0xaf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0818e997 +0xb4:  mov    %edi,%eax
0818e999 +0xb6:  mov    %esi,%edx
0818e99b +0xb8:  mov    %eax,(%esp)
0818e99e +0xbb:  call   08ae3750 <_Unwind_Resume>
0818e9a3 +0xc0:  mov    %ebx,%eax
0818e9a5 +0xc2:  mov    %eax,&_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE3m_pE
0818e9aa +0xc7:  jmp    0818e9ad <+0xca>
0818e9ac +0xc9:  nop
0818e9ad +0xca:  add    $0x1c,%esp
0818e9b0 +0xcd:  pop    %ebx
0818e9b1 +0xce:  pop    %esi
0818e9b2 +0xcf:  pop    %edi
0818e9b3 +0xd0:  pop    %ebp
0818e9b4 +0xd1:  ret
0818e9b5 +0xd2:  nop
0818e9b6 +0xd3:  nop
0818e9b7 +0xd4:  nop
```

## 反编译 C

```c
// <global>::global @ 0x818e8e3

/* ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*) */

void ARAD::Arad_Dispatcher::_GLOBAL__I_db_dispatch(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
