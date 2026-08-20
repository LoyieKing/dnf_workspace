# reportHackInfo

`_ZN8WongWork13CHackAnalyzer14reportHackInfoEv`

`WongWork::CHackAnalyzer::reportHackInfo()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8080  _ZN8WongWork13CHackAnalyzer14reportHackInfoEv
#           WongWork::CHackAnalyzer::reportHackInfo()
# range [0x080f8080, 0x080f81a5]
080f8080 +0x000:  push   %ebp
080f8081 +0x001:  mov    %esp,%ebp
080f8083 +0x003:  push   %edi
080f8084 +0x004:  push   %esi
080f8085 +0x005:  push   %ebx
080f8086 +0x006:  sub    $0x4c,%esp
080f8089 +0x009:  mov    0x8(%ebp),%eax
080f808c +0x00c:  add    $0x8,%eax
080f808f +0x00f:  mov    %eax,(%esp)
080f8092 +0x012:  call   080f9c3c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x448>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x448
080f8097 +0x017:  test   %al,%al
080f8099 +0x019:  jne    080f819a <+0x11a>
080f809f +0x01f:  mov    0x8(%ebp),%eax
080f80a2 +0x022:  lea    0x8(%eax),%edx
080f80a5 +0x025:  lea    -0x20(%ebp),%eax
080f80a8 +0x028:  mov    %edx,0x4(%esp)
080f80ac +0x02c:  mov    %eax,(%esp)
080f80af +0x02f:  call   080f9c80 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x48c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x48c
080f80b4 +0x034:  sub    $0x4,%esp
080f80b7 +0x037:  lea    -0x20(%ebp),%eax
080f80ba +0x03a:  mov    %eax,0x4(%esp)
080f80be +0x03e:  lea    -0x24(%ebp),%eax
080f80c1 +0x041:  mov    %eax,(%esp)
080f80c4 +0x044:  call   080f9ca4 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x4b0>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x4b0
080f80c9 +0x049:  mov    0x8(%ebp),%eax
080f80cc +0x04c:  lea    0x8(%eax),%edx
080f80cf +0x04f:  lea    -0x1c(%ebp),%eax
080f80d2 +0x052:  mov    %edx,0x4(%esp)
080f80d6 +0x056:  mov    %eax,(%esp)
080f80d9 +0x059:  call   080f9cbe <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x4ca>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x4ca
080f80de +0x05e:  sub    $0x4,%esp
080f80e1 +0x061:  lea    -0x1c(%ebp),%eax
080f80e4 +0x064:  mov    %eax,0x4(%esp)
080f80e8 +0x068:  lea    -0x28(%ebp),%eax
080f80eb +0x06b:  mov    %eax,(%esp)
080f80ee +0x06e:  call   080f9ca4 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x4b0>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x4b0
080f80f3 +0x073:  jmp    080f817e <+0xfe>
080f80f8 +0x078:  lea    -0x24(%ebp),%eax
080f80fb +0x07b:  mov    %eax,(%esp)
080f80fe +0x07e:  call   080f9d26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x532>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x532
080f8103 +0x083:  mov    (%eax),%edx
080f8105 +0x085:  mov    %edx,-0x38(%ebp)
080f8108 +0x088:  mov    0x4(%eax),%edx
080f810b +0x08b:  mov    %edx,-0x34(%ebp)
080f810e +0x08e:  mov    0x8(%eax),%edx
080f8111 +0x091:  mov    %edx,-0x30(%ebp)
080f8114 +0x094:  mov    0xc(%eax),%eax
080f8117 +0x097:  mov    %eax,-0x2c(%ebp)
080f811a +0x09a:  lea    -0x24(%ebp),%eax
080f811d +0x09d:  mov    %eax,(%esp)
080f8120 +0x0a0:  call   080f9d30 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x53c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x53c
080f8125 +0x0a5:  mov    0xc(%eax),%eax
080f8128 +0x0a8:  mov    %eax,%edi
080f812a +0x0aa:  lea    -0x24(%ebp),%eax
080f812d +0x0ad:  mov    %eax,(%esp)
080f8130 +0x0b0:  call   080f9d30 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x53c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x53c
080f8135 +0x0b5:  movzwl 0x8(%eax),%eax
080f8139 +0x0b9:  movzwl %ax,%esi
080f813c +0x0bc:  lea    -0x24(%ebp),%eax
080f813f +0x0bf:  mov    %eax,(%esp)
080f8142 +0x0c2:  call   080f9d30 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x53c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x53c
080f8147 +0x0c7:  mov    0x4(%eax),%ebx
080f814a +0x0ca:  lea    -0x24(%ebp),%eax
080f814d +0x0cd:  mov    %eax,(%esp)
080f8150 +0x0d0:  call   080f9d30 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x53c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x53c
080f8155 +0x0d5:  mov    (%eax),%eax
080f8157 +0x0d7:  movl   $0x1,0x10(%esp)
080f815f +0x0df:  mov    %edi,0xc(%esp)
080f8163 +0x0e3:  mov    %esi,0x8(%esp)
080f8167 +0x0e7:  mov    %ebx,0x4(%esp)
080f816b +0x0eb:  mov    %eax,(%esp)
080f816e +0x0ee:  call   080f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>  ; WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
080f8173 +0x0f3:  lea    -0x24(%ebp),%eax
080f8176 +0x0f6:  mov    %eax,(%esp)
080f8179 +0x0f9:  call   080f9d10 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x51c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x51c
080f817e +0x0fe:  lea    -0x28(%ebp),%eax
080f8181 +0x101:  mov    %eax,0x4(%esp)
080f8185 +0x105:  lea    -0x24(%ebp),%eax
080f8188 +0x108:  mov    %eax,(%esp)
080f818b +0x10b:  call   080f9ce4 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x4f0>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x4f0
080f8190 +0x110:  test   %al,%al
080f8192 +0x112:  jne    080f80f8 <+0x78>
080f8198 +0x118:  jmp    080f819b <+0x11b>
080f819a +0x11a:  nop
080f819b +0x11b:  lea    -0xc(%ebp),%esp
080f819e +0x11e:  add    $0x0,%esp
080f81a1 +0x121:  pop    %ebx
080f81a2 +0x122:  pop    %esi
080f81a3 +0x123:  pop    %edi
080f81a4 +0x124:  pop    %ebp
080f81a5 +0x125:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::reportHackInfo @ 0x80f8080

/* WongWork::CHackAnalyzer::reportHackInfo() */

void WongWork::CHackAnalyzer::reportHackInfo(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
  local_2c [4];
  __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [16];
  
  cVar3 = std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::empty();
  if (cVar3 == '\0') {
    std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
    ::__normal_iterator<WongWork::stHackInfo_t*>(local_28,local_24);
    std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::end();
    __gnu_cxx::
    __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
    ::__normal_iterator<WongWork::stHackInfo_t*>(local_2c,local_20);
    while (bVar4 = __gnu_cxx::operator!=(local_28,local_2c), bVar4) {
      __gnu_cxx::
      __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
      ::operator*(local_28);
      iVar5 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      iVar5 = *(int *)(iVar5 + 0xc);
      iVar6 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      uVar1 = *(ushort *)(iVar6 + 8);
      iVar6 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      uVar2 = *(uint *)(iVar6 + 4);
      puVar7 = (uint *)__gnu_cxx::
                       __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
                       ::operator->(local_28);
      ReqDBSaveHackInfo(*puVar7,uVar2,uVar1,iVar5,1);
      __gnu_cxx::
      __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
      ::operator++(local_28);
    }
  }
  return;
}
```
