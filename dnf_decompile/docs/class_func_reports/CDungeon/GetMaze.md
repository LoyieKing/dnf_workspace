# GetMaze

`_ZNK8CDungeon7GetMazeEi`

`CDungeon::GetMaze(int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834bf0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834bf0e  _ZNK8CDungeon7GetMazeEi
#           CDungeon::GetMaze(int) const
# range [0x0834bf0e, 0x0834bf55]
0834bf0e +0x00:  push   %ebp
0834bf0f +0x01:  mov    %esp,%ebp
0834bf11 +0x03:  push   %ebx
0834bf12 +0x04:  sub    $0x14,%esp
0834bf15 +0x07:  mov    0xc(%ebp),%ebx
0834bf18 +0x0a:  mov    0x8(%ebp),%eax
0834bf1b +0x0d:  add    $0x62c,%eax
0834bf20 +0x12:  mov    %eax,(%esp)
0834bf23 +0x15:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834bf28 +0x1a:  cmp    %eax,%ebx
0834bf2a +0x1c:  setae  %al
0834bf2d +0x1f:  test   %al,%al
0834bf2f +0x21:  je     0834bf38 <+0x2a>
0834bf31 +0x23:  mov    $0x0,%eax
0834bf36 +0x28:  jmp    0834bf50 <+0x42>
0834bf38 +0x2a:  mov    0xc(%ebp),%eax
0834bf3b +0x2d:  mov    0x8(%ebp),%edx
0834bf3e +0x30:  add    $0x62c,%edx
0834bf44 +0x36:  mov    %eax,0x4(%esp)
0834bf48 +0x3a:  mov    %edx,(%esp)
0834bf4b +0x3d:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834bf50 +0x42:  add    $0x14,%esp
0834bf53 +0x45:  pop    %ebx
0834bf54 +0x46:  pop    %ebp
0834bf55 +0x47:  ret
```

## 反编译 C

```c
// CDungeon::GetMaze @ 0x834bf0e

/* CDungeon::GetMaze(int) const */

undefined4 __thiscall CDungeon::GetMaze(CDungeon *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  if ((uint)param_1 < uVar1) {
    uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                      ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
