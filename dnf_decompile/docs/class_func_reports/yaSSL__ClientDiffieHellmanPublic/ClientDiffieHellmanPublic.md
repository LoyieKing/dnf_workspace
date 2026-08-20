# ClientDiffieHellmanPublic

`_ZN5yaSSL25ClientDiffieHellmanPublicC1Ev`

`yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x087469c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087469c0  _ZN5yaSSL25ClientDiffieHellmanPublicC1Ev
#           yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic()
# range [0x087469c0, 0x087469ec]
087469c0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
087469c5 +0x05:  add    $0xc261d3,%ecx
087469cb +0x0b:  push   %ebp
087469cc +0x0c:  mov    %esp,%ebp
087469ce +0x0e:  mov    0x8(%ebp),%eax
087469d1 +0x11:  mov    -0x4dc(%ecx),%edx
087469d7 +0x17:  movl   $0x0,0x8(%eax)
087469de +0x1e:  movl   $0x0,0xc(%eax)
087469e5 +0x25:  add    $0x8,%edx
087469e8 +0x28:  mov    %edx,(%eax)
087469ea +0x2a:  pop    %ebp
087469eb +0x2b:  ret
087469ec +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic @ 0x87469c0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c6bc;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
