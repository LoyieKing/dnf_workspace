# GetRandMaze

`_ZNK8CDungeon11GetRandMazeERi`

`CDungeon::GetRandMaze(int&) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834beb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834beb8  _ZNK8CDungeon11GetRandMazeERi
#           CDungeon::GetRandMaze(int&) const
# range [0x0834beb8, 0x0834bf0d]
0834beb8 +0x00:  push   %ebp
0834beb9 +0x01:  mov    %esp,%ebp
0834bebb +0x03:  push   %ebx
0834bebc +0x04:  sub    $0x24,%esp
0834bebf +0x07:  call   0807dca0 <_init+0x598>
0834bec4 +0x0c:  mov    %eax,%ebx
0834bec6 +0x0e:  mov    0x8(%ebp),%eax
0834bec9 +0x11:  add    $0x62c,%eax
0834bece +0x16:  mov    %eax,(%esp)
0834bed1 +0x19:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834bed6 +0x1e:  mov    %eax,-0xc(%ebp)
0834bed9 +0x21:  mov    %ebx,%eax
0834bedb +0x23:  mov    $0x0,%edx
0834bee0 +0x28:  divl   -0xc(%ebp)
0834bee3 +0x2b:  mov    %edx,%ecx
0834bee5 +0x2d:  mov    %ecx,%eax
0834bee7 +0x2f:  mov    %eax,%edx
0834bee9 +0x31:  mov    0xc(%ebp),%eax
0834beec +0x34:  mov    %edx,(%eax)
0834beee +0x36:  mov    0xc(%ebp),%eax
0834bef1 +0x39:  mov    (%eax),%eax
0834bef3 +0x3b:  mov    0x8(%ebp),%edx
0834bef6 +0x3e:  add    $0x62c,%edx
0834befc +0x44:  mov    %eax,0x4(%esp)
0834bf00 +0x48:  mov    %edx,(%esp)
0834bf03 +0x4b:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834bf08 +0x50:  add    $0x24,%esp
0834bf0b +0x53:  pop    %ebx
0834bf0c +0x54:  pop    %ebp
0834bf0d +0x55:  ret
```

## 反编译 C

```c
// CDungeon::GetRandMaze @ 0x834beb8

/* CDungeon::GetRandMaze(int&) const */

void __thiscall CDungeon::GetRandMaze(CDungeon *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = rand();
  uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  *param_1 = uVar1 % uVar2;
  std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
            ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),*param_1);
  return;
}
```
