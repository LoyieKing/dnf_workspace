# CheckUserCount

`_ZN9GameWorld14CheckUserCountEi`

`GameWorld::CheckUserCount(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4e0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4e0c  _ZN9GameWorld14CheckUserCountEi
#           GameWorld::CheckUserCount(int)
# range [0x086c4e0c, 0x086c4e4f]
086c4e0c +0x00:  push   %ebp
086c4e0d +0x01:  mov    %esp,%ebp
086c4e0f +0x03:  sub    $0x28,%esp
086c4e12 +0x06:  mov    0x8(%ebp),%eax
086c4e15 +0x09:  add    $0x134,%eax
086c4e1a +0x0e:  mov    %eax,(%esp)
086c4e1d +0x11:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086c4e22 +0x16:  mov    %eax,-0x10(%ebp)
086c4e25 +0x19:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086c4e2a +0x1e:  mov    0x3c0(%eax),%eax
086c4e30 +0x24:  mov    %eax,-0xc(%ebp)
086c4e33 +0x27:  mov    0xc(%ebp),%eax
086c4e36 +0x2a:  mov    -0x10(%ebp),%edx
086c4e39 +0x2d:  lea    (%edx,%eax,1),%eax
086c4e3c +0x30:  cmp    -0xc(%ebp),%eax
086c4e3f +0x33:  jle    086c4e48 <+0x3c>
086c4e41 +0x35:  mov    $0x0,%eax
086c4e46 +0x3a:  jmp    086c4e4d <+0x41>
086c4e48 +0x3c:  mov    $0x1,%eax
086c4e4d +0x41:  leave
086c4e4e +0x42:  ret
086c4e4f +0x43:  nop
```

## 反编译 C

```c
// GameWorld::CheckUserCount @ 0x86c4e0c

/* GameWorld::CheckUserCount(int) */

bool __thiscall GameWorld::CheckUserCount(GameWorld *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                  *)(this + 0x134));
  iVar2 = G_CEnvironment();
  return iVar1 + param_1 <= *(int *)(iVar2 + 0x3c0);
}
```
