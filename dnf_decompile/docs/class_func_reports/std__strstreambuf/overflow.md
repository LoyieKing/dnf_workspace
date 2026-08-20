# overflow

`_ZNSt12strstreambuf8overflowEi`

`std::strstreambuf::overflow(int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dda70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dda70  _ZNSt12strstreambuf8overflowEi
#           std::strstreambuf::overflow(int)
# range [0x086dda70, 0x086ddb8f]
086dda70 +0x000:  push   %ebp
086dda71 +0x001:  mov    %esp,%ebp
086dda73 +0x003:  sub    $0x38,%esp
086dda76 +0x006:  mov    %ebx,-0xc(%ebp)
086dda79 +0x009:  mov    0xc(%ebp),%ebx
086dda7c +0x00c:  mov    %esi,-0x8(%ebp)
086dda7f +0x00f:  mov    0x8(%ebp),%esi
086dda82 +0x012:  mov    %edi,-0x4(%ebp)
086dda85 +0x015:  cmp    $0xffffffff,%ebx
086dda88 +0x018:  jne    086ddaa0 <+0x30>
086dda8a +0x01a:  xor    %ebx,%ebx
086dda8c +0x01c:  mov    %ebx,%eax
086dda8e +0x01e:  mov    -0x8(%ebp),%esi
086dda91 +0x021:  mov    -0xc(%ebp),%ebx
086dda94 +0x024:  mov    -0x4(%ebp),%edi
086dda97 +0x027:  mov    %ebp,%esp
086dda99 +0x029:  pop    %ebp
086dda9a +0x02a:  ret
086dda9b +0x02b:  nop
086dda9c +0x02c:  lea    0x0(%esi,%eiz,1),%esi
086ddaa0 +0x030:  mov    0x14(%esi),%eax
086ddaa3 +0x033:  cmp    0x18(%esi),%eax
086ddaa6 +0x036:  je     086ddab0 <+0x40>
086ddaa8 +0x038:  mov    %bl,(%eax)
086ddaaa +0x03a:  addl   $0x1,0x14(%esi)
086ddaae +0x03e:  jmp    086dda8c <+0x1c>
086ddab0 +0x040:  movzbl 0x28(%esi),%edx
086ddab4 +0x044:  test   $0x1,%dl
086ddab7 +0x047:  je     086ddb68 <+0xf8>
086ddabd +0x04d:  test   $0x2,%dl
086ddac0 +0x050:  jne    086ddb68 <+0xf8>
086ddac6 +0x056:  and    $0x4,%edx
086ddac9 +0x059:  jne    086ddb68 <+0xf8>
086ddacf +0x05f:  sub    0x10(%esi),%eax
086ddad2 +0x062:  mov    %eax,-0x1c(%ebp)
086ddad5 +0x065:  add    %eax,%eax
086ddad7 +0x067:  test   %eax,%eax
086ddad9 +0x069:  mov    %eax,-0x20(%ebp)
086ddadc +0x06c:  jg     086ddae5 <+0x75>
086ddade +0x06e:  movl   $0x1,-0x20(%ebp)
086ddae5 +0x075:  mov    -0x20(%ebp),%eax
086ddae8 +0x078:  mov    %esi,(%esp)
086ddaeb +0x07b:  mov    %eax,0x4(%esp)
086ddaef +0x07f:  call   086dda40 <_ZNSt12strstreambuf8_M_allocEj>  ; std::strstreambuf::_M_alloc(unsigned int)
086ddaf4 +0x084:  test   %eax,%eax
086ddaf6 +0x086:  mov    %eax,%edi
086ddaf8 +0x088:  je     086ddb55 <+0xe5>
086ddafa +0x08a:  mov    0x10(%esi),%eax
086ddafd +0x08d:  mov    -0x1c(%ebp),%edx
086ddb00 +0x090:  mov    %edi,(%esp)
086ddb03 +0x093:  mov    %eax,0x4(%esp)
086ddb07 +0x097:  mov    %edx,0x8(%esp)
086ddb0b +0x09b:  call   0807d8a0 <_init+0x198>
086ddb10 +0x0a0:  mov    0x8(%esi),%eax
086ddb13 +0x0a3:  mov    0x10(%esi),%ecx
086ddb16 +0x0a6:  test   %eax,%eax
086ddb18 +0x0a8:  je     086ddb72 <+0x102>
086ddb1a +0x0aa:  mov    -0x20(%ebp),%edx
086ddb1d +0x0ad:  sub    0x4(%esi),%eax
086ddb20 +0x0b0:  cmp    -0x1c(%ebp),%eax
086ddb23 +0x0b3:  mov    %edi,0x10(%esi)
086ddb26 +0x0b6:  lea    (%edi,%edx,1),%edx
086ddb29 +0x0b9:  mov    %edx,0x18(%esi)
086ddb2c +0x0bc:  mov    -0x1c(%ebp),%edx
086ddb2f +0x0bf:  mov    %edi,0x4(%esi)
086ddb32 +0x0c2:  lea    (%edi,%edx,1),%edx
086ddb35 +0x0c5:  mov    %edx,0x14(%esi)
086ddb38 +0x0c8:  lea    (%edi,%eax,1),%edx
086ddb3b +0x0cb:  mov    %edx,0x8(%esi)
086ddb3e +0x0ce:  jge    086ddb43 <+0xd3>
086ddb40 +0x0d0:  mov    -0x1c(%ebp),%eax
086ddb43 +0x0d3:  lea    (%edi,%eax,1),%eax
086ddb46 +0x0d6:  mov    %eax,0xc(%esi)
086ddb49 +0x0d9:  mov    %ecx,0x4(%esp)
086ddb4d +0x0dd:  mov    %esi,(%esp)
086ddb50 +0x0e0:  call   086dda00 <_ZNSt12strstreambuf7_M_freeEPc>  ; std::strstreambuf::_M_free(char*)
086ddb55 +0x0e5:  mov    0x14(%esi),%eax
086ddb58 +0x0e8:  cmp    0x18(%esi),%eax
086ddb5b +0x0eb:  jne    086ddaa8 <+0x38>
086ddb61 +0x0f1:  lea    0x0(%esi,%eiz,1),%esi
086ddb68 +0x0f8:  mov    $0xffffffff,%ebx
086ddb6d +0x0fd:  jmp    086dda8c <+0x1c>
086ddb72 +0x102:  mov    -0x20(%ebp),%eax
086ddb75 +0x105:  mov    %edi,0x10(%esi)
086ddb78 +0x108:  lea    (%edi,%eax,1),%eax
086ddb7b +0x10b:  add    -0x1c(%ebp),%edi
086ddb7e +0x10e:  mov    %eax,0x18(%esi)
086ddb81 +0x111:  mov    %edi,0x14(%esi)
086ddb84 +0x114:  jmp    086ddb49 <+0xd9>
086ddb86 +0x116:  nop
086ddb87 +0x117:  nop
086ddb88 +0x118:  nop
086ddb89 +0x119:  nop
086ddb8a +0x11a:  nop
086ddb8b +0x11b:  nop
086ddb8c +0x11c:  nop
086ddb8d +0x11d:  nop
086ddb8e +0x11e:  nop
086ddb8f +0x11f:  nop
```

## 反编译 C

```c
// std::strstreambuf::overflow @ 0x86dda70

/* std::strstreambuf::overflow(int) */

int __thiscall std::strstreambuf::overflow(strstreambuf *this,int param_1)

{
  strstreambuf sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  size_t __n;
  void *__dest;
  size_t sVar4;
  uint local_24;
  
  if (param_1 == -1) {
    return 0;
  }
  puVar3 = *(undefined1 **)(this + 0x14);
  if (puVar3 == *(undefined1 **)(this + 0x18)) {
    sVar1 = this[0x28];
    if (((((byte)sVar1 & 1) != 0) && (((byte)sVar1 & 2) == 0)) && (((byte)sVar1 & 4) == 0)) {
      __n = (int)puVar3 - *(int *)(this + 0x10);
      local_24 = __n * 2;
      if ((int)local_24 < 1) {
        local_24 = 1;
      }
      __dest = (void *)_M_alloc(this,local_24);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(this + 0x10),__n);
        pcVar2 = *(char **)(this + 0x10);
        if (*(int *)(this + 8) == 0) {
          *(void **)(this + 0x10) = __dest;
          *(uint *)(this + 0x18) = (int)__dest + local_24;
          *(size_t *)(this + 0x14) = (int)__dest + __n;
        }
        else {
          sVar4 = *(int *)(this + 8) - *(int *)(this + 4);
          *(void **)(this + 0x10) = __dest;
          *(uint *)(this + 0x18) = (int)__dest + local_24;
          *(void **)(this + 4) = __dest;
          *(size_t *)(this + 0x14) = (int)__dest + __n;
          *(size_t *)(this + 8) = (int)__dest + sVar4;
          if ((int)sVar4 < (int)__n) {
            sVar4 = __n;
          }
          *(size_t *)(this + 0xc) = (int)__dest + sVar4;
        }
        _M_free(this,pcVar2);
      }
      puVar3 = *(undefined1 **)(this + 0x14);
      if (puVar3 != *(undefined1 **)(this + 0x18)) goto LAB_086ddaa8;
    }
    param_1 = -1;
  }
  else {
LAB_086ddaa8:
    *puVar3 = (char)param_1;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return param_1;
}
```
