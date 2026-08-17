# BlueMarbleTileScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## BlueMarbleTileScript

```asm
// === 088d5068 BlueMarbleTileScript::BlueMarbleTileScript  [0x088d5068-0x88d507b] ===
 88d5068:	55                   	push   %ebp
 88d5069:	89 e5                	mov    %esp,%ebp
 88d506b:	83 ec 18             	sub    $0x18,%esp
 88d506e:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5071:	89 04 24             	mov    %eax,(%esp)
 88d5074:	e8 03 00 00 00       	call   88d507c <_ZN20BlueMarbleTileScript5clearEv>
 88d5079:	c9                   	leave
 88d507a:	c3                   	ret
 88d507b:	90                   	nop

```

```c
// BlueMarbleTileScript::BlueMarbleTileScript @ 0x88d5068

/* BlueMarbleTileScript::BlueMarbleTileScript() */

void __thiscall BlueMarbleTileScript::BlueMarbleTileScript(BlueMarbleTileScript *this)

{
  clear(this);
  return;
}

```

---

## clear

```asm
// === 088d507c BlueMarbleTileScript::clear  [0x088d507c-0x88d509b] ===
 88d507c:	55                   	push   %ebp
 88d507d:	89 e5                	mov    %esp,%ebp
 88d507f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5082:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88d5088:	8b 45 08             	mov    0x8(%ebp),%eax
 88d508b:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 88d508f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5092:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 88d5099:	5d                   	pop    %ebp
 88d509a:	c3                   	ret
 88d509b:	90                   	nop

```

```c
// BlueMarbleTileScript::clear @ 0x88d507c

/* BlueMarbleTileScript::clear() */

void __thiscall BlueMarbleTileScript::clear(BlueMarbleTileScript *this)

{
  *(undefined4 *)this = 0;
  this[4] = (BlueMarbleTileScript)0x0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## importScript

```asm
// === 088d509c BlueMarbleTileScript::importScript  [0x088d509c-0x88d5209] ===
 88d509c:	55                   	push   %ebp
 88d509d:	89 e5                	mov    %esp,%ebp
 88d509f:	56                   	push   %esi
 88d50a0:	53                   	push   %ebx
 88d50a1:	83 ec 20             	sub    $0x20,%esp
 88d50a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d50a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d50ab:	c7 04 24 40 af e0 08 	movl   $0x8e0af40,(%esp)
 88d50b2:	e8 72 6c fe ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88d50b7:	83 f0 01             	xor    $0x1,%eax
 88d50ba:	84 c0                	test   %al,%al
 88d50bc:	74 0a                	je     88d50c8 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x2c>
 88d50be:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d50c3:	e9 39 01 00 00       	jmp    88d5201 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x165>
 88d50c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d50cb:	89 04 24             	mov    %eax,(%esp)
 88d50ce:	e8 fd 14 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d50d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d50d6:	89 04 24             	mov    %eax,(%esp)
 88d50d9:	e8 f2 14 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d50de:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 88d50e5:	eb 04                	jmp    88d50eb <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4f>
 88d50e7:	90                   	nop
 88d50e8:	eb 01                	jmp    88d50eb <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4f>
 88d50ea:	90                   	nop
 88d50eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88d50f2:	00 
 88d50f3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d50f6:	89 04 24             	mov    %eax,(%esp)
 88d50f9:	e8 61 77 fe ff       	call   88bc85f <_Z8ScanTypeRSsb>
 88d50fe:	83 f0 01             	xor    $0x1,%eax
 88d5101:	84 c0                	test   %al,%al
 88d5103:	0f 85 aa 00 00 00    	jne    88d51b3 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x117>
 88d5109:	c7 44 24 04 41 af e0 	movl   $0x8e0af41,0x4(%esp)
 88d5110:	08 
 88d5111:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5114:	89 04 24             	mov    %eax,(%esp)
 88d5117:	e8 85 b8 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d511c:	84 c0                	test   %al,%al
 88d511e:	74 56                	je     88d5176 <_ZN20BlueMarbleTileScript12importScriptEPKc+0xda>
 88d5120:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d5123:	89 04 24             	mov    %eax,(%esp)
 88d5126:	e8 77 76 fe ff       	call   88bc7a2 <_Z7ScanStrPSs>
 88d512b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d512e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5132:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d5135:	89 04 24             	mov    %eax,(%esp)
 88d5138:	e8 73 28 e3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 88d513d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d5140:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d5144:	8b 45 08             	mov    0x8(%ebp),%eax
 88d5147:	89 04 24             	mov    %eax,(%esp)
 88d514a:	e8 bb 00 00 00       	call   88d520a <_ZN20BlueMarbleTileScript6toTypeESs>
 88d514f:	8b 55 08             	mov    0x8(%ebp),%edx
 88d5152:	89 02                	mov    %eax,(%edx)
 88d5154:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d5157:	89 04 24             	mov    %eax,(%esp)
 88d515a:	e8 81 2a e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d515f:	eb 8a                	jmp    88d50eb <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4f>
 88d5161:	89 d3                	mov    %edx,%ebx
 88d5163:	89 c6                	mov    %eax,%esi
 88d5165:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88d5168:	89 04 24             	mov    %eax,(%esp)
 88d516b:	e8 70 2a e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d5170:	89 f0                	mov    %esi,%eax
 88d5172:	89 da                	mov    %ebx,%edx
 88d5174:	eb 50                	jmp    88d51c6 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x12a>
 88d5176:	c7 44 24 04 48 af e0 	movl   $0x8e0af48,0x4(%esp)
 88d517d:	08 
 88d517e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d5181:	89 04 24             	mov    %eax,(%esp)
 88d5184:	e8 18 b8 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5189:	84 c0                	test   %al,%al
 88d518b:	0f 84 56 ff ff ff    	je     88d50e7 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4b>
 88d5191:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d5194:	89 04 24             	mov    %eax,(%esp)
 88d5197:	e8 88 72 fe ff       	call   88bc424 <_Z7ScanIntPi>
 88d519c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 88d519f:	85 c0                	test   %eax,%eax
 88d51a1:	0f 84 43 ff ff ff    	je     88d50ea <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4e>
 88d51a7:	8b 45 08             	mov    0x8(%ebp),%eax
 88d51aa:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 88d51ae:	e9 38 ff ff ff       	jmp    88d50eb <_ZN20BlueMarbleTileScript12importScriptEPKc+0x4f>
 88d51b3:	90                   	nop
 88d51b4:	bb 01 00 00 00       	mov    $0x1,%ebx
 88d51b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d51bc:	89 04 24             	mov    %eax,(%esp)
 88d51bf:	e8 1c 2a e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d51c4:	eb 30                	jmp    88d51f6 <_ZN20BlueMarbleTileScript12importScriptEPKc+0x15a>
 88d51c6:	89 d3                	mov    %edx,%ebx
 88d51c8:	89 c6                	mov    %eax,%esi
 88d51ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d51cd:	89 04 24             	mov    %eax,(%esp)
 88d51d0:	e8 0b 2a e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d51d5:	89 f0                	mov    %esi,%eax
 88d51d7:	89 da                	mov    %ebx,%edx
 88d51d9:	eb 00                	jmp    88d51db <_ZN20BlueMarbleTileScript12importScriptEPKc+0x13f>
 88d51db:	89 d3                	mov    %edx,%ebx
 88d51dd:	89 c6                	mov    %eax,%esi
 88d51df:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d51e2:	89 04 24             	mov    %eax,(%esp)
 88d51e5:	e8 f6 29 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d51ea:	89 f0                	mov    %esi,%eax
 88d51ec:	89 da                	mov    %ebx,%edx
 88d51ee:	89 04 24             	mov    %eax,(%esp)
 88d51f1:	e8 5a e5 20 00       	call   8ae3750 <_Unwind_Resume>
 88d51f6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d51f9:	89 04 24             	mov    %eax,(%esp)
 88d51fc:	e8 df 29 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d5201:	89 d8                	mov    %ebx,%eax
 88d5203:	83 c4 20             	add    $0x20,%esp
 88d5206:	5b                   	pop    %ebx
 88d5207:	5e                   	pop    %esi
 88d5208:	5d                   	pop    %ebp
 88d5209:	c3                   	ret

```

```c
// BlueMarbleTileScript::importScript @ 0x88d509c

/* BlueMarbleTileScript::importScript(char const*) */

undefined4 __thiscall BlueMarbleTileScript::importScript(BlueMarbleTileScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int local_1c;
  string local_18 [4];
  string local_14;
  string local_10 [4];
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
                    /* try { // try from 088d50d9 to 088d50dd has its CatchHandler @ 088d51db */
    std::string::string(local_18);
    local_1c = 0;
                    /* try { // try from 088d50f9 to 088d513c has its CatchHandler @ 088d51c6 */
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[type]");
      if (bVar2) {
        ScanStr(local_18);
        std::string::string(local_10,local_18);
                    /* try { // try from 088d514a to 088d514e has its CatchHandler @ 088d5161 */
        uVar3 = toType(this,local_10);
        *(undefined4 *)this = uVar3;
                    /* try { // try from 088d515a to 088d515e has its CatchHandler @ 088d51c6 */
        std::string::~string(local_10);
      }
      else {
                    /* try { // try from 088d5184 to 088d519b has its CatchHandler @ 088d51c6 */
        bVar2 = std::operator==(&local_14,"[enter dungeon]");
        if ((bVar2) && (ScanInt(&local_1c), local_1c != 0)) {
          this[4] = (BlueMarbleTileScript)0x1;
        }
      }
    }
    uVar3 = 1;
                    /* try { // try from 088d51bf to 088d51c3 has its CatchHandler @ 088d51db */
    std::string::~string(local_18);
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## toType

```asm
// === 088d520a BlueMarbleTileScript::toType  [0x088d520a-0x88d53d5] ===
 88d520a:	55                   	push   %ebp
 88d520b:	89 e5                	mov    %esp,%ebp
 88d520d:	83 ec 18             	sub    $0x18,%esp
 88d5210:	c7 44 24 04 58 af e0 	movl   $0x8e0af58,0x4(%esp)
 88d5217:	08 
 88d5218:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d521b:	89 04 24             	mov    %eax,(%esp)
 88d521e:	e8 7e b7 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5223:	84 c0                	test   %al,%al
 88d5225:	74 0a                	je     88d5231 <_ZN20BlueMarbleTileScript6toTypeESs+0x27>
 88d5227:	b8 00 00 00 00       	mov    $0x0,%eax
 88d522c:	e9 a3 01 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5231:	c7 44 24 04 5e af e0 	movl   $0x8e0af5e,0x4(%esp)
 88d5238:	08 
 88d5239:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d523c:	89 04 24             	mov    %eax,(%esp)
 88d523f:	e8 5d b7 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5244:	84 c0                	test   %al,%al
 88d5246:	74 0a                	je     88d5252 <_ZN20BlueMarbleTileScript6toTypeESs+0x48>
 88d5248:	b8 01 00 00 00       	mov    $0x1,%eax
 88d524d:	e9 82 01 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5252:	c7 44 24 04 64 af e0 	movl   $0x8e0af64,0x4(%esp)
 88d5259:	08 
 88d525a:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d525d:	89 04 24             	mov    %eax,(%esp)
 88d5260:	e8 3c b7 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5265:	84 c0                	test   %al,%al
 88d5267:	74 0a                	je     88d5273 <_ZN20BlueMarbleTileScript6toTypeESs+0x69>
 88d5269:	b8 02 00 00 00       	mov    $0x2,%eax
 88d526e:	e9 61 01 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5273:	c7 44 24 04 68 af e0 	movl   $0x8e0af68,0x4(%esp)
 88d527a:	08 
 88d527b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d527e:	89 04 24             	mov    %eax,(%esp)
 88d5281:	e8 1b b7 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5286:	84 c0                	test   %al,%al
 88d5288:	74 0a                	je     88d5294 <_ZN20BlueMarbleTileScript6toTypeESs+0x8a>
 88d528a:	b8 03 00 00 00       	mov    $0x3,%eax
 88d528f:	e9 40 01 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5294:	c7 44 24 04 6d af e0 	movl   $0x8e0af6d,0x4(%esp)
 88d529b:	08 
 88d529c:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d529f:	89 04 24             	mov    %eax,(%esp)
 88d52a2:	e8 fa b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d52a7:	84 c0                	test   %al,%al
 88d52a9:	74 0a                	je     88d52b5 <_ZN20BlueMarbleTileScript6toTypeESs+0xab>
 88d52ab:	b8 04 00 00 00       	mov    $0x4,%eax
 88d52b0:	e9 1f 01 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d52b5:	c7 44 24 04 71 af e0 	movl   $0x8e0af71,0x4(%esp)
 88d52bc:	08 
 88d52bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d52c0:	89 04 24             	mov    %eax,(%esp)
 88d52c3:	e8 d9 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d52c8:	84 c0                	test   %al,%al
 88d52ca:	74 0a                	je     88d52d6 <_ZN20BlueMarbleTileScript6toTypeESs+0xcc>
 88d52cc:	b8 05 00 00 00       	mov    $0x5,%eax
 88d52d1:	e9 fe 00 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d52d6:	c7 44 24 04 76 af e0 	movl   $0x8e0af76,0x4(%esp)
 88d52dd:	08 
 88d52de:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d52e1:	89 04 24             	mov    %eax,(%esp)
 88d52e4:	e8 b8 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d52e9:	84 c0                	test   %al,%al
 88d52eb:	74 0a                	je     88d52f7 <_ZN20BlueMarbleTileScript6toTypeESs+0xed>
 88d52ed:	b8 06 00 00 00       	mov    $0x6,%eax
 88d52f2:	e9 dd 00 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d52f7:	c7 44 24 04 7b af e0 	movl   $0x8e0af7b,0x4(%esp)
 88d52fe:	08 
 88d52ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5302:	89 04 24             	mov    %eax,(%esp)
 88d5305:	e8 97 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d530a:	84 c0                	test   %al,%al
 88d530c:	74 0a                	je     88d5318 <_ZN20BlueMarbleTileScript6toTypeESs+0x10e>
 88d530e:	b8 07 00 00 00       	mov    $0x7,%eax
 88d5313:	e9 bc 00 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5318:	c7 44 24 04 87 af e0 	movl   $0x8e0af87,0x4(%esp)
 88d531f:	08 
 88d5320:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5323:	89 04 24             	mov    %eax,(%esp)
 88d5326:	e8 76 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d532b:	84 c0                	test   %al,%al
 88d532d:	74 0a                	je     88d5339 <_ZN20BlueMarbleTileScript6toTypeESs+0x12f>
 88d532f:	b8 08 00 00 00       	mov    $0x8,%eax
 88d5334:	e9 9b 00 00 00       	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5339:	c7 44 24 04 93 af e0 	movl   $0x8e0af93,0x4(%esp)
 88d5340:	08 
 88d5341:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5344:	89 04 24             	mov    %eax,(%esp)
 88d5347:	e8 55 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d534c:	84 c0                	test   %al,%al
 88d534e:	74 07                	je     88d5357 <_ZN20BlueMarbleTileScript6toTypeESs+0x14d>
 88d5350:	b8 09 00 00 00       	mov    $0x9,%eax
 88d5355:	eb 7d                	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5357:	c7 44 24 04 98 af e0 	movl   $0x8e0af98,0x4(%esp)
 88d535e:	08 
 88d535f:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5362:	89 04 24             	mov    %eax,(%esp)
 88d5365:	e8 37 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d536a:	84 c0                	test   %al,%al
 88d536c:	74 07                	je     88d5375 <_ZN20BlueMarbleTileScript6toTypeESs+0x16b>
 88d536e:	b8 0a 00 00 00       	mov    $0xa,%eax
 88d5373:	eb 5f                	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5375:	c7 44 24 04 9d af e0 	movl   $0x8e0af9d,0x4(%esp)
 88d537c:	08 
 88d537d:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d5380:	89 04 24             	mov    %eax,(%esp)
 88d5383:	e8 19 b6 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d5388:	84 c0                	test   %al,%al
 88d538a:	74 07                	je     88d5393 <_ZN20BlueMarbleTileScript6toTypeESs+0x189>
 88d538c:	b8 0b 00 00 00       	mov    $0xb,%eax
 88d5391:	eb 41                	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d5393:	c7 44 24 04 a9 af e0 	movl   $0x8e0afa9,0x4(%esp)
 88d539a:	08 
 88d539b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d539e:	89 04 24             	mov    %eax,(%esp)
 88d53a1:	e8 fb b5 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d53a6:	84 c0                	test   %al,%al
 88d53a8:	74 07                	je     88d53b1 <_ZN20BlueMarbleTileScript6toTypeESs+0x1a7>
 88d53aa:	b8 0c 00 00 00       	mov    $0xc,%eax
 88d53af:	eb 23                	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d53b1:	c7 44 24 04 ae af e0 	movl   $0x8e0afae,0x4(%esp)
 88d53b8:	08 
 88d53b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d53bc:	89 04 24             	mov    %eax,(%esp)
 88d53bf:	e8 dd b5 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d53c4:	84 c0                	test   %al,%al
 88d53c6:	74 07                	je     88d53cf <_ZN20BlueMarbleTileScript6toTypeESs+0x1c5>
 88d53c8:	b8 0d 00 00 00       	mov    $0xd,%eax
 88d53cd:	eb 05                	jmp    88d53d4 <_ZN20BlueMarbleTileScript6toTypeESs+0x1ca>
 88d53cf:	b8 00 00 00 00       	mov    $0x0,%eax
 88d53d4:	c9                   	leave
 88d53d5:	c3                   	ret

```

```c
// BlueMarbleTileScript::toType @ 0x88d520a

/* BlueMarbleTileScript::toType(std::string) */

undefined4 __thiscall BlueMarbleTileScript::toType(undefined4 this,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_2,"empty");
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    bVar1 = std::operator==(param_2,"start");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_2,"end");
      if (bVar1) {
        uVar2 = 2;
      }
      else {
        bVar1 = std::operator==(param_2,"gold");
        if (bVar1) {
          uVar2 = 3;
        }
        else {
          bVar1 = std::operator==(param_2,"exp");
          if (bVar1) {
            uVar2 = 4;
          }
          else {
            bVar1 = std::operator==(param_2,"drop");
            if (bVar1) {
              uVar2 = 5;
            }
            else {
              bVar1 = std::operator==(param_2,"item");
              if (bVar1) {
                uVar2 = 6;
              }
              else {
                bVar1 = std::operator==(param_2,"unique item");
                if (bVar1) {
                  uVar2 = 7;
                }
                else {
                  bVar1 = std::operator==(param_2,"boss unique");
                  if (bVar1) {
                    uVar2 = 8;
                  }
                  else {
                    bVar1 = std::operator==(param_2,"move");
                    if (bVar1) {
                      uVar2 = 9;
                    }
                    else {
                      bVar1 = std::operator==(param_2,"jump");
                      if (bVar1) {
                        uVar2 = 10;
                      }
                      else {
                        bVar1 = std::operator==(param_2,"gold goblin");
                        if (bVar1) {
                          uVar2 = 0xb;
                        }
                        else {
                          bVar1 = std::operator==(param_2,"rope");
                          if (bVar1) {
                            uVar2 = 0xc;
                          }
                          else {
                            bVar1 = std::operator==(param_2,"kick");
                            if (bVar1) {
                              uVar2 = 0xd;
                            }
                            else {
                              uVar2 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

```

