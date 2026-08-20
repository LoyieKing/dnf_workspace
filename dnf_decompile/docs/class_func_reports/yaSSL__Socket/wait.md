# wait

`_ZN5yaSSL6Socket4waitEv`

`yaSSL::Socket::wait()`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1610  _ZN5yaSSL6Socket4waitEv
#           yaSSL::Socket::wait()
# range [0x087a1610, 0x087a164f]
087a1610 +0x00:  push   %ebp
087a1611 +0x01:  mov    %esp,%ebp
087a1613 +0x03:  push   %ebx
087a1614 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1619 +0x09:  add    $0xbcb57f,%ebx
087a161f +0x0f:  sub    $0x24,%esp
087a1622 +0x12:  lea    -0x9(%ebp),%eax
087a1625 +0x15:  mov    %eax,0x4(%esp)
087a1629 +0x19:  mov    0x8(%ebp),%eax
087a162c +0x1c:  movl   $0x2,0xc(%esp)
087a1634 +0x24:  movl   $0x1,0x8(%esp)
087a163c +0x2c:  mov    %eax,(%esp)
087a163f +0x2f:  call   087a1590 <_ZN5yaSSL6Socket7receiveEPhji>  ; yaSSL::Socket::receive(unsigned char*, unsigned int, int)
087a1644 +0x34:  cmp    $0xffffffff,%eax
087a1647 +0x37:  setne  %al
087a164a +0x3a:  add    $0x24,%esp
087a164d +0x3d:  pop    %ebx
087a164e +0x3e:  pop    %ebp
087a164f +0x3f:  ret
```

## 反编译 C

```c
// yaSSL::Socket::wait @ 0x87a1610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::wait() */

bool __thiscall yaSSL::Socket::wait(Socket *this)

{
  int iVar1;
  uchar local_d [5];
  
  builtin_memcpy(local_d + 1,"\x19\x16z\b",4);
  iVar1 = receive(this,local_d,1,2);
  return iVar1 != -1;
}
```
