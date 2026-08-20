# getFactory

`_ZNK5yaSSL3SSL10getFactoryEv`

`yaSSL::SSL::getFactory() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08751180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08751180  _ZNK5yaSSL3SSL10getFactoryEv
#           yaSSL::SSL::getFactory() const
# range [0x08751180, 0x0875119d]
08751180 +0x00:  push   %ebp
08751181 +0x01:  mov    %esp,%ebp
08751183 +0x03:  push   %ebx
08751184 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08751189 +0x09:  add    $0xc1ba0f,%ebx
0875118f +0x0f:  sub    $0x4,%esp
08751192 +0x12:  call   08751120 <_ZN5yaSSL14GetSSL_FactoryEv>  ; yaSSL::GetSSL_Factory()
08751197 +0x17:  add    $0x4,%esp
0875119a +0x1a:  pop    %ebx
0875119b +0x1b:  pop    %ebp
0875119c +0x1c:  ret
0875119d +0x1d:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::getFactory @ 0x8751180

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::getFactory() const */

void yaSSL::SSL::getFactory(void)

{
  GetSSL_Factory();
  return;
}
```
