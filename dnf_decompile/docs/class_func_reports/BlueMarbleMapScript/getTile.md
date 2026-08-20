# getTile

`_ZN19BlueMarbleMapScript7getTileEj`

`BlueMarbleMapScript::getTile(unsigned int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleMapScript` | `0x088d5644` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5644  _ZN19BlueMarbleMapScript7getTileEj
#           BlueMarbleMapScript::getTile(unsigned int)
# range [0x088d5644, 0x088d568f]
088d5644 +0x00:  push   %ebp
088d5645 +0x01:  mov    %esp,%ebp
088d5647 +0x03:  sub    $0x18,%esp
088d564a +0x06:  mov    0x8(%ebp),%eax
088d564d +0x09:  mov    %eax,(%esp)
088d5650 +0x0c:  call   080da4e8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x685>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x685
088d5655 +0x11:  cmp    0xc(%ebp),%eax
088d5658 +0x14:  jb     088d5660 <+0x1c>
088d565a +0x16:  cmpl   $0x0,0xc(%ebp)
088d565e +0x1a:  jne    088d5667 <+0x23>
088d5660 +0x1c:  mov    $0x1,%eax
088d5665 +0x21:  jmp    088d566c <+0x28>
088d5667 +0x23:  mov    $0x0,%eax
088d566c +0x28:  test   %al,%al
088d566e +0x2a:  je     088d5677 <+0x33>
088d5670 +0x2c:  mov    $0x0,%eax
088d5675 +0x31:  jmp    088d568e <+0x4a>
088d5677 +0x33:  mov    0xc(%ebp),%eax
088d567a +0x36:  lea    -0x1(%eax),%edx
088d567d +0x39:  mov    0x8(%ebp),%eax
088d5680 +0x3c:  mov    %edx,0x4(%esp)
088d5684 +0x40:  mov    %eax,(%esp)
088d5687 +0x43:  call   088d680c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x8e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x8e
088d568c +0x48:  mov    (%eax),%eax
088d568e +0x4a:  leave
088d568f +0x4b:  ret
```

## 反编译 C

```c
// BlueMarbleMapScript::getTile @ 0x88d5644

/* BlueMarbleMapScript::getTile(unsigned int) */

undefined4 __thiscall BlueMarbleMapScript::getTile(BlueMarbleMapScript *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar2 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size
                    ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  if ((uVar2 < param_1) || (param_1 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)
             std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::operator[]
                       ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this,
                        param_1 - 1);
    uVar3 = *puVar4;
  }
  return uVar3;
}
```
