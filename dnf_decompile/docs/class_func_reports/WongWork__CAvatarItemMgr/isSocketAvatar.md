# isSocketAvatar

`_ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi`

`WongWork::CAvatarItemMgr::isSocketAvatar(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9228` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9228  _ZN8WongWork14CAvatarItemMgr14isSocketAvatarEi
#           WongWork::CAvatarItemMgr::isSocketAvatar(int)
# range [0x082f9228, 0x082f925b]
082f9228 +0x00:  push   %ebp
082f9229 +0x01:  mov    %esp,%ebp
082f922b +0x03:  sub    $0x28,%esp
082f922e +0x06:  mov    0xc(%ebp),%eax
082f9231 +0x09:  mov    %eax,0x4(%esp)
082f9235 +0x0d:  mov    0x8(%ebp),%eax
082f9238 +0x10:  mov    %eax,(%esp)
082f923b +0x13:  call   082f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>  ; WongWork::CAvatarItemMgr::getJewelSocketData(int) const
082f9240 +0x18:  mov    %eax,-0xc(%ebp)
082f9243 +0x1b:  mov    -0xc(%ebp),%eax
082f9246 +0x1e:  movzwl (%eax),%eax
082f9249 +0x21:  test   %ax,%ax
082f924c +0x24:  jne    082f9255 <+0x2d>
082f924e +0x26:  mov    $0x0,%eax
082f9253 +0x2b:  jmp    082f925a <+0x32>
082f9255 +0x2d:  mov    $0x1,%eax
082f925a +0x32:  leave
082f925b +0x33:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::isSocketAvatar @ 0x82f9228

/* WongWork::CAvatarItemMgr::isSocketAvatar(int) */

bool __thiscall WongWork::CAvatarItemMgr::isSocketAvatar(CAvatarItemMgr *this,int param_1)

{
  short *psVar1;
  
  psVar1 = (short *)getJewelSocketData(this,param_1);
  return *psVar1 != 0;
}
```
