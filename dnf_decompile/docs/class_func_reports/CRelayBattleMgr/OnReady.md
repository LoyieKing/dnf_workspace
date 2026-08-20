# OnReady

`_ZN15CRelayBattleMgr7OnReadyEib`

`CRelayBattleMgr::OnReady(int, bool)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de252  _ZN15CRelayBattleMgr7OnReadyEib
#           CRelayBattleMgr::OnReady(int, bool)
# range [0x085de252, 0x085de29b]
085de252 +0x00:  push   %ebp
085de253 +0x01:  mov    %esp,%ebp
085de255 +0x03:  push   %ebx
085de256 +0x04:  sub    $0x4,%esp
085de259 +0x07:  mov    0x10(%ebp),%eax
085de25c +0x0a:  mov    %al,-0x8(%ebp)
085de25f +0x0d:  cmpl   $0x0,0xc(%ebp)
085de263 +0x11:  js     085de291 <+0x3f>
085de265 +0x13:  cmpl   $0x7,0xc(%ebp)
085de269 +0x17:  jg     085de294 <+0x42>
085de26b +0x19:  mov    0xc(%ebp),%ecx
085de26e +0x1c:  cmpb   $0x0,-0x8(%ebp)
085de272 +0x20:  je     085de27b <+0x29>
085de274 +0x22:  mov    $0x1,%edx
085de279 +0x27:  jmp    085de280 <+0x2e>
085de27b +0x29:  mov    $0x0,%edx
085de280 +0x2e:  mov    0x8(%ebp),%ebx
085de283 +0x31:  mov    %ecx,%eax
085de285 +0x33:  add    %eax,%eax
085de287 +0x35:  add    %ecx,%eax
085de289 +0x37:  shl    $0x2,%eax
085de28c +0x3a:  mov    %edx,(%eax,%ebx,1)
085de28f +0x3d:  jmp    085de295 <+0x43>
085de291 +0x3f:  nop
085de292 +0x40:  jmp    085de295 <+0x43>
085de294 +0x42:  nop
085de295 +0x43:  add    $0x4,%esp
085de298 +0x46:  pop    %ebx
085de299 +0x47:  pop    %ebp
085de29a +0x48:  ret
085de29b +0x49:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::OnReady @ 0x85de252

/* CRelayBattleMgr::OnReady(int, bool) */

void __thiscall CRelayBattleMgr::OnReady(CRelayBattleMgr *this,int param_1,bool param_2)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(uint *)(this + param_1 * 0xc) = (uint)param_2;
  }
  return;
}
```
