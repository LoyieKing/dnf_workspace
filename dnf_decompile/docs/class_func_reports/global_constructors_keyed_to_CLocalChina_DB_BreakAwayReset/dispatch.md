# dispatch

`_GLOBAL__I__ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream`

`global constructors keyed to CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CLocalChina_DB_BreakAwayReset` | `0x08128a75` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08128a75  _GLOBAL__I__ZN29CLocalChina_DB_BreakAwayReset8dispatchEiiP6Stream
#           global constructors keyed to CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*)
# range [0x08128a75, 0x08128c1f]
08128a75 +0x000:  push   %ebp
08128a76 +0x001:  mov    %esp,%ebp
08128a78 +0x003:  sub    $0x18,%esp
08128a7b +0x006:  movl   $0xffff,0x4(%esp)
08128a83 +0x00e:  movl   $0x1,(%esp)
08128a8a +0x015:  call   08128a35 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08128a8f +0x01a:  leave
08128a90 +0x01b:  ret
08128a91 +0x01c:  nop
08128a92 +0x01d:  push   %ebp
08128a93 +0x01e:  mov    %esp,%ebp
08128a95 +0x020:  sub    $0x28,%esp
08128a98 +0x023:  movl   $0x10,0x4(%esp)
08128aa0 +0x02b:  mov    0x8(%ebp),%eax
08128aa3 +0x02e:  mov    %eax,(%esp)
08128aa6 +0x031:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
08128aab +0x036:  xor    $0x1,%eax
08128aae +0x039:  test   %al,%al
08128ab0 +0x03b:  je     08128ab9 <+0x44>
08128ab2 +0x03d:  mov    $0x0,%eax
08128ab7 +0x042:  jmp    08128ae3 <+0x6e>
08128ab9 +0x044:  mov    0x8(%ebp),%eax
08128abc +0x047:  mov    0x8(%eax),%eax
08128abf +0x04a:  mov    %eax,%edx
08128ac1 +0x04c:  mov    0x8(%ebp),%eax
08128ac4 +0x04f:  mov    0x10(%eax),%eax
08128ac7 +0x052:  lea    (%edx,%eax,1),%eax
08128aca +0x055:  mov    %eax,-0xc(%ebp)
08128acd +0x058:  movl   $0x10,0x4(%esp)
08128ad5 +0x060:  mov    0x8(%ebp),%eax
08128ad8 +0x063:  mov    %eax,(%esp)
08128adb +0x066:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
08128ae0 +0x06b:  mov    -0xc(%ebp),%eax
08128ae3 +0x06e:  leave
08128ae4 +0x06f:  ret
08128ae5 +0x070:  nop
08128ae6 +0x071:  push   %ebp
08128ae7 +0x072:  mov    %esp,%ebp
08128ae9 +0x074:  sub    $0x18,%esp
08128aec +0x077:  mov    0x8(%ebp),%eax
08128aef +0x07a:  movl   $&_ZTV13DB_LogBuyItem+0x8,(%eax)
08128af5 +0x080:  mov    0x8(%ebp),%eax
08128af8 +0x083:  mov    %eax,(%esp)
08128afb +0x086:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08128b00 +0x08b:  mov    $0x0,%eax
08128b05 +0x090:  test   %al,%al
08128b07 +0x092:  je     08128b14 <+0x9f>
08128b09 +0x094:  mov    0x8(%ebp),%eax
08128b0c +0x097:  mov    %eax,(%esp)
08128b0f +0x09a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128b14 +0x09f:  leave
08128b15 +0x0a0:  ret
08128b16 +0x0a1:  push   %ebp
08128b17 +0x0a2:  mov    %esp,%ebp
08128b19 +0x0a4:  sub    $0x18,%esp
08128b1c +0x0a7:  mov    0x8(%ebp),%eax
08128b1f +0x0aa:  mov    %eax,(%esp)
08128b22 +0x0ad:  call   08128ae6 <+0x71>
08128b27 +0x0b2:  mov    0x8(%ebp),%eax
08128b2a +0x0b5:  mov    %eax,(%esp)
08128b2d +0x0b8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128b32 +0x0bd:  leave
08128b33 +0x0be:  ret
08128b34 +0x0bf:  push   %ebp
08128b35 +0x0c0:  mov    %esp,%ebp
08128b37 +0x0c2:  sub    $0x18,%esp
08128b3a +0x0c5:  mov    0x8(%ebp),%eax
08128b3d +0x0c8:  movl   $&_ZTV33CLocalGlobal_DB_STATICS_BOSSTOWER+0x8,(%eax)
08128b43 +0x0ce:  mov    0x8(%ebp),%eax
08128b46 +0x0d1:  mov    %eax,(%esp)
08128b49 +0x0d4:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08128b4e +0x0d9:  mov    $0x0,%eax
08128b53 +0x0de:  test   %al,%al
08128b55 +0x0e0:  je     08128b62 <+0xed>
08128b57 +0x0e2:  mov    0x8(%ebp),%eax
08128b5a +0x0e5:  mov    %eax,(%esp)
08128b5d +0x0e8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128b62 +0x0ed:  leave
08128b63 +0x0ee:  ret
08128b64 +0x0ef:  push   %ebp
08128b65 +0x0f0:  mov    %esp,%ebp
08128b67 +0x0f2:  sub    $0x18,%esp
08128b6a +0x0f5:  mov    0x8(%ebp),%eax
08128b6d +0x0f8:  mov    %eax,(%esp)
08128b70 +0x0fb:  call   08128b34 <+0xbf>
08128b75 +0x100:  mov    0x8(%ebp),%eax
08128b78 +0x103:  mov    %eax,(%esp)
08128b7b +0x106:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128b80 +0x10b:  leave
08128b81 +0x10c:  ret
08128b82 +0x10d:  push   %ebp
08128b83 +0x10e:  mov    %esp,%ebp
08128b85 +0x110:  sub    $0x18,%esp
08128b88 +0x113:  mov    0x8(%ebp),%eax
08128b8b +0x116:  movl   $&_ZTV32CLocalChina_DB_LastDay_BreakAway+0x8,(%eax)
08128b91 +0x11c:  mov    0x8(%ebp),%eax
08128b94 +0x11f:  mov    %eax,(%esp)
08128b97 +0x122:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08128b9c +0x127:  mov    $0x0,%eax
08128ba1 +0x12c:  test   %al,%al
08128ba3 +0x12e:  je     08128bb0 <+0x13b>
08128ba5 +0x130:  mov    0x8(%ebp),%eax
08128ba8 +0x133:  mov    %eax,(%esp)
08128bab +0x136:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128bb0 +0x13b:  leave
08128bb1 +0x13c:  ret
08128bb2 +0x13d:  push   %ebp
08128bb3 +0x13e:  mov    %esp,%ebp
08128bb5 +0x140:  sub    $0x18,%esp
08128bb8 +0x143:  mov    0x8(%ebp),%eax
08128bbb +0x146:  mov    %eax,(%esp)
08128bbe +0x149:  call   08128b82 <+0x10d>
08128bc3 +0x14e:  mov    0x8(%ebp),%eax
08128bc6 +0x151:  mov    %eax,(%esp)
08128bc9 +0x154:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128bce +0x159:  leave
08128bcf +0x15a:  ret
08128bd0 +0x15b:  push   %ebp
08128bd1 +0x15c:  mov    %esp,%ebp
08128bd3 +0x15e:  sub    $0x18,%esp
08128bd6 +0x161:  mov    0x8(%ebp),%eax
08128bd9 +0x164:  movl   $&_ZTV29CLocalChina_DB_BreakAwayReset+0x8,(%eax)
08128bdf +0x16a:  mov    0x8(%ebp),%eax
08128be2 +0x16d:  mov    %eax,(%esp)
08128be5 +0x170:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08128bea +0x175:  mov    $0x0,%eax
08128bef +0x17a:  test   %al,%al
08128bf1 +0x17c:  je     08128bfe <+0x189>
08128bf3 +0x17e:  mov    0x8(%ebp),%eax
08128bf6 +0x181:  mov    %eax,(%esp)
08128bf9 +0x184:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128bfe +0x189:  leave
08128bff +0x18a:  ret
08128c00 +0x18b:  push   %ebp
08128c01 +0x18c:  mov    %esp,%ebp
08128c03 +0x18e:  sub    $0x18,%esp
08128c06 +0x191:  mov    0x8(%ebp),%eax
08128c09 +0x194:  mov    %eax,(%esp)
08128c0c +0x197:  call   08128bd0 <+0x15b>
08128c11 +0x19c:  mov    0x8(%ebp),%eax
08128c14 +0x19f:  mov    %eax,(%esp)
08128c17 +0x1a2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08128c1c +0x1a7:  leave
08128c1d +0x1a8:  ret
08128c1e +0x1a9:  nop
08128c1f +0x1aa:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8128a75

/* CLocalChina_DB_BreakAwayReset::dispatch(int, int, Stream*) */

void CLocalChina_DB_BreakAwayReset::_GLOBAL__I_dispatch(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
