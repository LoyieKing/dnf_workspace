# get_ready

`_ZNK5yaSSL6Socket9get_readyEv`

`yaSSL::Socket::get_ready() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a16c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a16c0  _ZNK5yaSSL6Socket9get_readyEv
#           yaSSL::Socket::get_ready() const
# range [0x087a16c0, 0x087a16fe]
087a16c0 +0x00:  push   %ebp
087a16c1 +0x01:  mov    %esp,%ebp
087a16c3 +0x03:  push   %ebx
087a16c4 +0x04:  sub    $0x24,%esp
087a16c7 +0x07:  lea    -0xc(%ebp),%eax
087a16ca +0x0a:  mov    %eax,0x8(%esp)
087a16ce +0x0e:  mov    0x8(%ebp),%eax
087a16d1 +0x11:  call   08722df8 <__i686.get_pc_thunk.bx>
087a16d6 +0x16:  add    $0xbcb4c2,%ebx
087a16dc +0x1c:  movl   $0x541b,0x4(%esp)
087a16e4 +0x24:  movl   $0x0,-0xc(%ebp)
087a16eb +0x2b:  mov    (%eax),%eax
087a16ed +0x2d:  mov    %eax,(%esp)
087a16f0 +0x30:  call   0807e2b0 <_init+0xba8>
087a16f5 +0x35:  mov    -0xc(%ebp),%eax
087a16f8 +0x38:  add    $0x24,%esp
087a16fb +0x3b:  pop    %ebx
087a16fc +0x3c:  pop    %ebp
087a16fd +0x3d:  ret
087a16fe +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Socket::get_ready @ 0x87a16c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::get_ready() const */

undefined4 __thiscall yaSSL::Socket::get_ready(Socket *this)

{
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  ioctl(*(int *)this,0x541b,local_10);
  return local_10[0];
}
```
