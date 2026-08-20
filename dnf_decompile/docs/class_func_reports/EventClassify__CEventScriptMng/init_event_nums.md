# init_event_nums

`_ZN13EventClassify15CEventScriptMng15init_event_numsEv`

`EventClassify::CEventScriptMng::init_event_nums()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810cdb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810cdb0  _ZN13EventClassify15CEventScriptMng15init_event_numsEv
#           EventClassify::CEventScriptMng::init_event_nums()
# range [0x0810cdb0, 0x0810cf31]
0810cdb0 +0x000:  push   %ebp
0810cdb1 +0x001:  mov    %esp,%ebp
0810cdb3 +0x003:  sub    $0x58,%esp
0810cdb6 +0x006:  mov    0x8(%ebp),%eax
0810cdb9 +0x009:  add    $0x50,%eax
0810cdbc +0x00c:  mov    %eax,(%esp)
0810cdbf +0x00f:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0810cdc4 +0x014:  movl   $0x56,-0x3c(%ebp)
0810cdcb +0x01b:  mov    0x8(%ebp),%eax
0810cdce +0x01e:  lea    0x50(%eax),%edx
0810cdd1 +0x021:  lea    -0x3c(%ebp),%eax
0810cdd4 +0x024:  mov    %eax,0x4(%esp)
0810cdd8 +0x028:  mov    %edx,(%esp)
0810cddb +0x02b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cde0 +0x030:  movl   $0x191,-0x38(%ebp)
0810cde7 +0x037:  mov    0x8(%ebp),%eax
0810cdea +0x03a:  lea    0x50(%eax),%edx
0810cded +0x03d:  lea    -0x38(%ebp),%eax
0810cdf0 +0x040:  mov    %eax,0x4(%esp)
0810cdf4 +0x044:  mov    %edx,(%esp)
0810cdf7 +0x047:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cdfc +0x04c:  movl   $0x192,-0x34(%ebp)
0810ce03 +0x053:  mov    0x8(%ebp),%eax
0810ce06 +0x056:  lea    0x50(%eax),%edx
0810ce09 +0x059:  lea    -0x34(%ebp),%eax
0810ce0c +0x05c:  mov    %eax,0x4(%esp)
0810ce10 +0x060:  mov    %edx,(%esp)
0810ce13 +0x063:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810ce18 +0x068:  movl   $0x193,-0x30(%ebp)
0810ce1f +0x06f:  mov    0x8(%ebp),%eax
0810ce22 +0x072:  lea    0x50(%eax),%edx
0810ce25 +0x075:  lea    -0x30(%ebp),%eax
0810ce28 +0x078:  mov    %eax,0x4(%esp)
0810ce2c +0x07c:  mov    %edx,(%esp)
0810ce2f +0x07f:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810ce34 +0x084:  movl   $0x194,-0x2c(%ebp)
0810ce3b +0x08b:  mov    0x8(%ebp),%eax
0810ce3e +0x08e:  lea    0x50(%eax),%edx
0810ce41 +0x091:  lea    -0x2c(%ebp),%eax
0810ce44 +0x094:  mov    %eax,0x4(%esp)
0810ce48 +0x098:  mov    %edx,(%esp)
0810ce4b +0x09b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810ce50 +0x0a0:  movl   $0x196,-0x28(%ebp)
0810ce57 +0x0a7:  mov    0x8(%ebp),%eax
0810ce5a +0x0aa:  lea    0x50(%eax),%edx
0810ce5d +0x0ad:  lea    -0x28(%ebp),%eax
0810ce60 +0x0b0:  mov    %eax,0x4(%esp)
0810ce64 +0x0b4:  mov    %edx,(%esp)
0810ce67 +0x0b7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810ce6c +0x0bc:  movl   $0x197,-0x24(%ebp)
0810ce73 +0x0c3:  mov    0x8(%ebp),%eax
0810ce76 +0x0c6:  lea    0x50(%eax),%edx
0810ce79 +0x0c9:  lea    -0x24(%ebp),%eax
0810ce7c +0x0cc:  mov    %eax,0x4(%esp)
0810ce80 +0x0d0:  mov    %edx,(%esp)
0810ce83 +0x0d3:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810ce88 +0x0d8:  movl   $0x199,-0x20(%ebp)
0810ce8f +0x0df:  mov    0x8(%ebp),%eax
0810ce92 +0x0e2:  lea    0x50(%eax),%edx
0810ce95 +0x0e5:  lea    -0x20(%ebp),%eax
0810ce98 +0x0e8:  mov    %eax,0x4(%esp)
0810ce9c +0x0ec:  mov    %edx,(%esp)
0810ce9f +0x0ef:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cea4 +0x0f4:  movl   $0x19a,-0x1c(%ebp)
0810ceab +0x0fb:  mov    0x8(%ebp),%eax
0810ceae +0x0fe:  lea    0x50(%eax),%edx
0810ceb1 +0x101:  lea    -0x1c(%ebp),%eax
0810ceb4 +0x104:  mov    %eax,0x4(%esp)
0810ceb8 +0x108:  mov    %edx,(%esp)
0810cebb +0x10b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cec0 +0x110:  movl   $0x19b,-0x18(%ebp)
0810cec7 +0x117:  mov    0x8(%ebp),%eax
0810ceca +0x11a:  lea    0x50(%eax),%edx
0810cecd +0x11d:  lea    -0x18(%ebp),%eax
0810ced0 +0x120:  mov    %eax,0x4(%esp)
0810ced4 +0x124:  mov    %edx,(%esp)
0810ced7 +0x127:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cedc +0x12c:  movl   $0x5c,-0x14(%ebp)
0810cee3 +0x133:  mov    0x8(%ebp),%eax
0810cee6 +0x136:  lea    0x50(%eax),%edx
0810cee9 +0x139:  lea    -0x14(%ebp),%eax
0810ceec +0x13c:  mov    %eax,0x4(%esp)
0810cef0 +0x140:  mov    %edx,(%esp)
0810cef3 +0x143:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cef8 +0x148:  movl   $0x65,-0x10(%ebp)
0810ceff +0x14f:  mov    0x8(%ebp),%eax
0810cf02 +0x152:  lea    0x50(%eax),%edx
0810cf05 +0x155:  lea    -0x10(%ebp),%eax
0810cf08 +0x158:  mov    %eax,0x4(%esp)
0810cf0c +0x15c:  mov    %edx,(%esp)
0810cf0f +0x15f:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cf14 +0x164:  movl   $0x19c,-0xc(%ebp)
0810cf1b +0x16b:  mov    0x8(%ebp),%eax
0810cf1e +0x16e:  lea    0x50(%eax),%edx
0810cf21 +0x171:  lea    -0xc(%ebp),%eax
0810cf24 +0x174:  mov    %eax,0x4(%esp)
0810cf28 +0x178:  mov    %edx,(%esp)
0810cf2b +0x17b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0810cf30 +0x180:  leave
0810cf31 +0x181:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::init_event_nums @ 0x810cdb0

/* EventClassify::CEventScriptMng::init_event_nums() */

void __thiscall EventClassify::CEventScriptMng::init_event_nums(CEventScriptMng *this)

{
  int local_40 [15];
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  local_40[0] = 0x56;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40);
  local_40[1] = 0x191;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 1);
  local_40[2] = 0x192;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 2);
  local_40[3] = 0x193;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 3);
  local_40[4] = 0x194;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 4);
  local_40[5] = 0x196;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 5);
  local_40[6] = 0x197;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 6);
  local_40[7] = 0x199;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 7);
  local_40[8] = 0x19a;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 8);
  local_40[9] = 0x19b;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 9);
  local_40[10] = 0x5c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 10);
  local_40[0xb] = 0x65;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 0xb);
  local_40[0xc] = 0x19c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 0xc);
  return;
}
```
