# loadScript

`_ZN8WongWork11CObjectDrop10loadScriptEPKc`

`WongWork::CObjectDrop::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CObjectDrop` | `0x08538352` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538352  _ZN8WongWork11CObjectDrop10loadScriptEPKc
#           WongWork::CObjectDrop::loadScript(char const*)
# range [0x08538352, 0x085383b7]
08538352 +0x00:  push   %ebp
08538353 +0x01:  mov    %esp,%ebp
08538355 +0x03:  sub    $0x28,%esp
08538358 +0x06:  movl   $0x0,-0x10(%ebp)
0853835f +0x0d:  jmp    08538398 <+0x46>
08538361 +0x0f:  movl   $0x0,-0xc(%ebp)
08538368 +0x16:  jmp    08538389 <+0x37>
0853836a +0x18:  mov    -0x10(%ebp),%ecx
0853836d +0x1b:  mov    -0xc(%ebp),%edx
08538370 +0x1e:  mov    0x8(%ebp),%eax
08538373 +0x21:  shl    $0x2,%ecx
08538376 +0x24:  lea    (%ecx,%edx,1),%edx
08538379 +0x27:  lea    0x28(%edx),%ecx
0853837c +0x2a:  mov    $0x3f800000,%edx
08538381 +0x2f:  mov    %edx,0x8(%eax,%ecx,4)
08538385 +0x33:  addl   $0x1,-0xc(%ebp)
08538389 +0x37:  cmpl   $0x3,-0xc(%ebp)
0853838d +0x3b:  setle  %al
08538390 +0x3e:  test   %al,%al
08538392 +0x40:  jne    0853836a <+0x18>
08538394 +0x42:  addl   $0x1,-0x10(%ebp)
08538398 +0x46:  cmpl   $0x4,-0x10(%ebp)
0853839c +0x4a:  setle  %al
0853839f +0x4d:  test   %al,%al
085383a1 +0x4f:  jne    08538361 <+0xf>
085383a3 +0x51:  mov    0x8(%ebp),%eax
085383a6 +0x54:  mov    0xc(%ebp),%edx
085383a9 +0x57:  mov    %edx,0x4(%esp)
085383ad +0x5b:  mov    %eax,(%esp)
085383b0 +0x5e:  call   08537938 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc>  ; WongWork::CMonsterDrop::loadScript(char const*)
085383b5 +0x63:  leave
085383b6 +0x64:  ret
085383b7 +0x65:  nop
```

## 反编译 C

```c
// WongWork::CObjectDrop::loadScript @ 0x8538352

/* WongWork::CObjectDrop::loadScript(char const*) */

void __thiscall WongWork::CObjectDrop::loadScript(CObjectDrop *this,char *param_1)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 4 + local_10 + 0x28) * 4 + 8) = 0x3f800000;
    }
  }
  CMonsterDrop::loadScript((CMonsterDrop *)this,param_1);
  return;
}
```
