# CheckMaterialIndex

`_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm`

`Event_Upgrade_Jar::CheckMaterialIndex(unsigned long)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4d20  _ZN17Event_Upgrade_Jar18CheckMaterialIndexEm
#           Event_Upgrade_Jar::CheckMaterialIndex(unsigned long)
# range [0x080f4d20, 0x080f4dab]
080f4d20 +0x00:  push   %ebp
080f4d21 +0x01:  mov    %esp,%ebp
080f4d23 +0x03:  sub    $0x28,%esp
080f4d26 +0x06:  mov    0x8(%ebp),%eax
080f4d29 +0x09:  movl   $0x0,0x84(%eax)
080f4d33 +0x13:  mov    0x8(%ebp),%eax
080f4d36 +0x16:  movb   $0x0,0x88(%eax)
080f4d3d +0x1d:  cmpl   $0x28be7b,0xc(%ebp)
080f4d44 +0x24:  jne    080f4d55 <+0x35>
080f4d46 +0x26:  mov    0x8(%ebp),%eax
080f4d49 +0x29:  movl   $0x2,0x84(%eax)
080f4d53 +0x33:  jmp    080f4daa <+0x8a>
080f4d55 +0x35:  movl   $0x0,-0xc(%ebp)
080f4d5c +0x3c:  jmp    080f4d92 <+0x72>
080f4d5e +0x3e:  mov    -0xc(%ebp),%eax
080f4d61 +0x41:  mov    0x8(%ebp),%edx
080f4d64 +0x44:  add    $0x34,%edx
080f4d67 +0x47:  mov    %eax,0x4(%esp)
080f4d6b +0x4b:  mov    %edx,(%esp)
080f4d6e +0x4e:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
080f4d73 +0x53:  mov    (%eax),%eax
080f4d75 +0x55:  cmp    0xc(%ebp),%eax
080f4d78 +0x58:  sete   %al
080f4d7b +0x5b:  test   %al,%al
080f4d7d +0x5d:  je     080f4d8e <+0x6e>
080f4d7f +0x5f:  mov    0x8(%ebp),%eax
080f4d82 +0x62:  movl   $0x1,0x84(%eax)
080f4d8c +0x6c:  jmp    080f4daa <+0x8a>
080f4d8e +0x6e:  addl   $0x1,-0xc(%ebp)
080f4d92 +0x72:  mov    0x8(%ebp),%eax
080f4d95 +0x75:  add    $0x34,%eax
080f4d98 +0x78:  mov    %eax,(%esp)
080f4d9b +0x7b:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
080f4da0 +0x80:  cmp    -0xc(%ebp),%eax
080f4da3 +0x83:  setg   %al
080f4da6 +0x86:  test   %al,%al
080f4da8 +0x88:  jne    080f4d5e <+0x3e>
080f4daa +0x8a:  leave
080f4dab +0x8b:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::CheckMaterialIndex @ 0x80f4d20

/* Event_Upgrade_Jar::CheckMaterialIndex(unsigned long) */

void __thiscall Event_Upgrade_Jar::CheckMaterialIndex(Event_Upgrade_Jar *this,ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  uint local_10;
  
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (Event_Upgrade_Jar)0x0;
  if (param_1 == 0x28be7b) {
    *(undefined4 *)(this + 0x84) = 2;
  }
  else {
    for (local_10 = 0;
        iVar2 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                          ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34)),
        (int)local_10 < iVar2; local_10 = local_10 + 1) {
      puVar1 = (ulong *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                  ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                   (this + 0x34),local_10);
      if (*puVar1 == param_1) {
        *(undefined4 *)(this + 0x84) = 1;
        return;
      }
    }
  }
  return;
}
```
