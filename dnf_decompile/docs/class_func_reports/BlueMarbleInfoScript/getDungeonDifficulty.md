# getDungeonDifficulty

`_ZN20BlueMarbleInfoScript20getDungeonDifficultyEi`

`BlueMarbleInfoScript::getDungeonDifficulty(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d6084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d6084  _ZN20BlueMarbleInfoScript20getDungeonDifficultyEi
#           BlueMarbleInfoScript::getDungeonDifficulty(int)
# range [0x088d6084, 0x088d60f1]
088d6084 +0x00:  push   %ebp
088d6085 +0x01:  mov    %esp,%ebp
088d6087 +0x03:  sub    $0x28,%esp
088d608a +0x06:  movl   $0x0,-0xc(%ebp)
088d6091 +0x0d:  jmp    088d60d2 <+0x4e>
088d6093 +0x0f:  mov    0x8(%ebp),%eax
088d6096 +0x12:  lea    0x24(%eax),%edx
088d6099 +0x15:  mov    -0xc(%ebp),%eax
088d609c +0x18:  mov    %eax,0x4(%esp)
088d60a0 +0x1c:  mov    %edx,(%esp)
088d60a3 +0x1f:  call   088d6c3a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4bc>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4bc
088d60a8 +0x24:  mov    (%eax),%eax
088d60aa +0x26:  cmp    0xc(%ebp),%eax
088d60ad +0x29:  sete   %al
088d60b0 +0x2c:  test   %al,%al
088d60b2 +0x2e:  je     088d60ce <+0x4a>
088d60b4 +0x30:  mov    0x8(%ebp),%eax
088d60b7 +0x33:  lea    0x24(%eax),%edx
088d60ba +0x36:  mov    -0xc(%ebp),%eax
088d60bd +0x39:  mov    %eax,0x4(%esp)
088d60c1 +0x3d:  mov    %edx,(%esp)
088d60c4 +0x40:  call   088d6c3a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4bc>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4bc
088d60c9 +0x45:  mov    0x4(%eax),%eax
088d60cc +0x48:  jmp    088d60f0 <+0x6c>
088d60ce +0x4a:  addl   $0x1,-0xc(%ebp)
088d60d2 +0x4e:  mov    0x8(%ebp),%eax
088d60d5 +0x51:  add    $0x24,%eax
088d60d8 +0x54:  mov    %eax,(%esp)
088d60db +0x57:  call   088d6c1e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4a0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4a0
088d60e0 +0x5c:  cmp    -0xc(%ebp),%eax
088d60e3 +0x5f:  seta   %al
088d60e6 +0x62:  test   %al,%al
088d60e8 +0x64:  jne    088d6093 <+0xf>
088d60ea +0x66:  mov    0x8(%ebp),%eax
088d60ed +0x69:  mov    0x20(%eax),%eax
088d60f0 +0x6c:  leave
088d60f1 +0x6d:  ret
```

## 反编译 C

```c
// BlueMarbleInfoScript::getDungeonDifficulty @ 0x88d6084

/* BlueMarbleInfoScript::getDungeonDifficulty(int) */

undefined4 __thiscall
BlueMarbleInfoScript::getDungeonDifficulty(BlueMarbleInfoScript *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::
            size((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
                 (this + 0x24));
    if (uVar3 <= local_10) {
      return *(undefined4 *)(this + 0x20);
    }
    piVar1 = (int *)std::
                    vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                    ::operator[]((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                  *)(this + 0x24),local_10);
    if (*piVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::
          operator[]((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                      *)(this + 0x24),local_10);
  return *(undefined4 *)(iVar2 + 4);
}
```
