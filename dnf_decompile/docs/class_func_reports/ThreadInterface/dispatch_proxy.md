# dispatch_proxy

`_ZN15ThreadInterface14dispatch_proxyEPv`

`ThreadInterface::dispatch_proxy(void*)`

| 类 | 地址 |
|---|---|
| `ThreadInterface` | `0x08630c1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630c1a  _ZN15ThreadInterface14dispatch_proxyEPv
#           ThreadInterface::dispatch_proxy(void*)
# range [0x08630c1a, 0x08630c45]
08630c1a +0x00:  push   %ebp
08630c1b +0x01:  mov    %esp,%ebp
08630c1d +0x03:  sub    $0x28,%esp
08630c20 +0x06:  mov    0x8(%ebp),%eax
08630c23 +0x09:  mov    %eax,-0xc(%ebp)
08630c26 +0x0c:  mov    -0xc(%ebp),%eax
08630c29 +0x0f:  mov    (%eax),%eax
08630c2b +0x11:  add    $0xc,%eax
08630c2e +0x14:  mov    (%eax),%edx
08630c30 +0x16:  mov    0x8(%ebp),%eax
08630c33 +0x19:  mov    %eax,0x4(%esp)
08630c37 +0x1d:  mov    -0xc(%ebp),%eax
08630c3a +0x20:  mov    %eax,(%esp)
08630c3d +0x23:  call   *%edx
08630c3f +0x25:  mov    $0x0,%eax
08630c44 +0x2a:  leave
08630c45 +0x2b:  ret
```

## 反编译 C

```c
// ThreadInterface::dispatch_proxy @ 0x8630c1a

/* ThreadInterface::dispatch_proxy(void*) */

undefined4 ThreadInterface::dispatch_proxy(void *param_1)

{
  (**(code **)(*(int *)param_1 + 0xc))(param_1,param_1);
  return 0;
}
```
