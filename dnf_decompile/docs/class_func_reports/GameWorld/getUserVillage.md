# getUserVillage

`_ZN9GameWorld14getUserVillageEP5CUser`

`GameWorld::getUserVillage(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd038  _ZN9GameWorld14getUserVillageEP5CUser
#           GameWorld::getUserVillage(CUser*)
# range [0x086cd038, 0x086cd083]
086cd038 +0x00:  push   %ebp
086cd039 +0x01:  mov    %esp,%ebp
086cd03b +0x03:  sub    $0x28,%esp
086cd03e +0x06:  cmpl   $0x0,0xc(%ebp)
086cd042 +0x0a:  jne    086cd04b <+0x13>
086cd044 +0x0c:  mov    $0x0,%eax
086cd049 +0x11:  jmp    086cd082 <+0x4a>
086cd04b +0x13:  mov    0xc(%ebp),%eax
086cd04e +0x16:  mov    %eax,(%esp)
086cd051 +0x19:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086cd056 +0x1e:  movsbl %al,%eax
086cd059 +0x21:  mov    %eax,-0xc(%ebp)
086cd05c +0x24:  cmpl   $0x0,-0xc(%ebp)
086cd060 +0x28:  jle    086cd06c <+0x34>
086cd062 +0x2a:  mov    &MAX_VILLAGE_NUM,%eax
086cd067 +0x2f:  cmp    %eax,-0xc(%ebp)
086cd06a +0x32:  jl     086cd073 <+0x3b>
086cd06c +0x34:  mov    $0x0,%eax
086cd071 +0x39:  jmp    086cd082 <+0x4a>
086cd073 +0x3b:  mov    0x8(%ebp),%eax
086cd076 +0x3e:  mov    0x1c(%eax),%edx
086cd079 +0x41:  mov    -0xc(%ebp),%eax
086cd07c +0x44:  imul   $0x34,%eax,%eax
086cd07f +0x47:  lea    (%edx,%eax,1),%eax
086cd082 +0x4a:  leave
086cd083 +0x4b:  ret
```

## 反编译 C

```c
// GameWorld::getUserVillage @ 0x86cd038

/* GameWorld::getUserVillage(CUser*) */

int __thiscall GameWorld::getUserVillage(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    iVar2 = (int)cVar1;
    if ((iVar2 < 1) || (MAX_VILLAGE_NUM <= iVar2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0x1c) + iVar2 * 0x34;
    }
  }
  return iVar2;
}
```
