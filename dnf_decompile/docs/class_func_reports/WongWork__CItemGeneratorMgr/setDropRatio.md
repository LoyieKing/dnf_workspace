# setDropRatio

`_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf`

`WongWork::CItemGeneratorMgr::setDropRatio(float)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGeneratorMgr` | `0x08534278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534278  _ZN8WongWork17CItemGeneratorMgr12setDropRatioEf
#           WongWork::CItemGeneratorMgr::setDropRatio(float)
# range [0x08534278, 0x085342c5]
08534278 +0x00:  push   %ebp
08534279 +0x01:  mov    %esp,%ebp
0853427b +0x03:  sub    $0x28,%esp
0853427e +0x06:  movl   $0x0,-0xc(%ebp)
08534285 +0x0d:  jmp    085342b9 <+0x41>
08534287 +0x0f:  mov    -0xc(%ebp),%edx
0853428a +0x12:  mov    0x8(%ebp),%eax
0853428d +0x15:  add    $0xf0,%edx
08534293 +0x1b:  mov    (%eax,%edx,4),%eax
08534296 +0x1e:  mov    (%eax),%eax
08534298 +0x20:  mov    (%eax),%ecx
0853429a +0x22:  mov    -0xc(%ebp),%edx
0853429d +0x25:  mov    0x8(%ebp),%eax
085342a0 +0x28:  add    $0xf0,%edx
085342a6 +0x2e:  mov    (%eax,%edx,4),%eax
085342a9 +0x31:  mov    0xc(%ebp),%edx
085342ac +0x34:  mov    %edx,0x4(%esp)
085342b0 +0x38:  mov    %eax,(%esp)
085342b3 +0x3b:  call   *%ecx
085342b5 +0x3d:  addl   $0x1,-0xc(%ebp)
085342b9 +0x41:  cmpl   $0x7,-0xc(%ebp)
085342bd +0x45:  setle  %al
085342c0 +0x48:  test   %al,%al
085342c2 +0x4a:  jne    08534287 <+0xf>
085342c4 +0x4c:  leave
085342c5 +0x4d:  ret
```

## 反编译 C

```c
// WongWork::CItemGeneratorMgr::setDropRatio @ 0x8534278

/* WongWork::CItemGeneratorMgr::setDropRatio(float) */

void __thiscall WongWork::CItemGeneratorMgr::setDropRatio(CItemGeneratorMgr *this,float param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + (local_10 + 0xf0) * 4))
              (*(undefined4 *)(this + (local_10 + 0xf0) * 4),param_1);
  }
  return;
}
```
