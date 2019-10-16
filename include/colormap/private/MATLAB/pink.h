/**
 * This file was automatically created with "create_c++_header.sh".
 * Do not edit manually.
 */
#pragma once
#include "colormap.h"

namespace colormap
{
namespace MATLAB
{

class Pink : public Colormap
{
private:
	class Wrapper : public WrapperBase
	{
	public:
		#ifdef float
			#error "TODO"
		#endif
		#define float local_real_t
        #include "shaders/glsl/MATLAB_pink.frag"
		#undef float
	};

public:
	Color getColor(double x) const override
	{
		Wrapper w;
		vec4 c = w.colormap(x);
		Color result;
		result.r = std::max(0.0, std::min(1.0, c.r));
		result.g = std::max(0.0, std::min(1.0, c.g));
		result.b = std::max(0.0, std::min(1.0, c.b));
		result.a = std::max(0.0, std::min(1.0, c.a));
		return result;
	}

	std::string getTitle() const override
	{
		return std::string("pink");
	}

	std::string getCategory() const override
	{
		return std::string("MATLAB");
	}

	std::string getSource() const override
	{
		return std::string(
			"vec4 colormap(float x) {\n"
			"    if (x < 0.0) {\n"
			"        return vec4(0.0, 0.0, 0.0, 0.0);\n"
			"    } else if (1.0 < x) {\n"
			"        return vec4(0.0, 0.0, 0.0, 0.0);\n"
			"    }\n"
			"    if (x < 3.1250000000000000e-02) {\n"
			"        float dx = x - 1.5625000000000000e-02;\n"
			"        return ((vec4(-1.4669881459549135e+03, -4.0682398921086065e+03, -4.0682398921088602e+03, 1.0) * dx\n"
			"               + vec4( 0.0000000000000000e+00,  0.0000000000000000e+00,  0.0000000000000000e+00, 1.0)) * dx\n"
			"               + vec4( 5.3504982998818882e+00,  7.5768322282919200e+00,  7.5768322282919822e+00, 1.0)) * dx\n"
			"               + vec4( 1.1785113019775800e-01,  0.0000000000000000e+00,  0.0000000000000000e+00, 1.0);\n"
			"    } else if (x < 4.6875000000000000e-02) {\n"
			"        float dx = x - 3.1250000000000000e-02;\n"
			"        return ((vec4( 1.2528152076829322e+03,  4.5446100426089361e+03,  4.5446100426102021e+03, 1.0) * dx\n"
			"               + vec4(-6.8765069341636575e+01, -1.9069874494259093e+02, -1.9069874494260281e+02, 1.0)) * dx\n"
			"               + vec4( 4.2760440914188163e+00,  4.5971643385639362e+00,  4.5971643385638128e+00, 1.0)) * dx\n"
			"               + vec4( 1.9585655046433401e-01,  1.0286889997472801e-01,  1.0286889997472801e-01, 1.0);\n"
			"    } else if (x < 6.2500000000000000e-02) {\n"
			"        float dx = x - 4.6875000000000000e-02;\n"
			"        return ((vec4(-8.2547934274917452e+01, -9.1253943618964820e+02, -9.1253943619445545e+02, 1.0) * dx\n"
			"               + vec4(-1.0039356481499135e+01,  2.2329850804702957e+01,  2.2329850804750397e+01, 1.0)) * dx\n"
			"               + vec4( 3.0447249379323211e+00,  1.9664003676594368e+00,  1.9664003676598694e+00, 1.0)) * dx\n"
			"               + vec4( 2.5066050313259902e-01,  1.4547859349066200e-01,  1.4547859349066200e-01, 1.0);\n"
			"    } else if (x < 7.8125000000000000e-02) {\n"
			"        float dx = x - 6.2500000000000000e-02;\n"
			"        return ((vec4( 1.3738814812365237e+02,  3.5917185339157112e+02,  3.5917185340953500e+02, 1.0) * dx\n"
			"               + vec4(-1.3908790900635891e+01, -2.0445435266686804e+01, -2.0445435266864703e+01, 1.0)) * dx\n"
			"               + vec4( 2.6705351350864612e+00,  1.9958443604409393e+00,  1.9958443604393332e+00, 1.0)) * dx\n"
			"               + vec4( 2.9546842014263902e-01,  1.7817416127495000e-01,  1.7817416127495000e-01, 1.0);\n"
			"    } else if (x < 9.3750000000000000e-02) {\n"
			"        float dx = x - 7.8125000000000000e-02;\n"
			"        return ((vec4( 2.7031959945674146e+01, -3.8567216714497711e+01, -3.8567216781546392e+01, 1.0) * dx\n"
			"               + vec4(-7.4687214573396865e+00, -3.6092546389569100e+00, -3.6092546382927484e+00, 1.0)) * dx\n"
			"               + vec4( 2.3365115044930929e+00,  1.6199898306652563e+00,  1.6199898306712481e+00, 1.0)) * dx\n"
			"               + vec4( 3.3432392491786600e-01,  2.0573779994945601e-01,  2.0573779994945601e-01, 1.0);\n"
			"    } else if (x < 1.0937500000000000e-01) {\n"
			"        float dx = x - 9.3750000000000000e-02;\n"
			"        return ((vec4( 3.2452254818731888e+01,  4.4132390168433041e+01,  4.4132390418663725e+01, 1.0) * dx\n"
			"               + vec4(-6.2015983348862109e+00, -5.4170929224489903e+00, -5.4170929249277355e+00, 1.0)) * dx\n"
			"               + vec4( 2.1229127577395634e+00,  1.4789531500182891e+00,  1.4789531499959279e+00, 1.0)) * dx\n"
			"               + vec4( 3.6911161759471400e-01,  2.3002185311411799e-01,  2.3002185311411799e-01, 1.0);\n"
			"    } else if (x < 1.2500000000000000e-01) {\n"
			"        float dx = x - 1.0937500000000000e-01;\n"
			"        return ((vec4( 1.7962452314829033e+01,  9.9760928434314167e+00,  9.9760919095573772e+00, 1.0) * dx\n"
			"               + vec4(-4.6803988902581537e+00, -3.3483871333036914e+00, -3.3483871240528735e+00, 1.0)) * dx\n"
			"               + vec4( 1.9528815510966826e+00,  1.3419925241471533e+00,  1.3419925242306059e+00, 1.0)) * dx\n"
			"               + vec4( 4.0089186286863698e-01,  2.5197631533948500e-01,  2.5197631533948500e-01, 1.0);\n"
			"    } else if (x < 1.4062500000000000e-01) {\n"
			"        float dx = x - 1.2500000000000000e-01;\n"
			"        return ((vec4( 1.4107229469108253e+01,  1.2353314086225026e+01,  1.2353317571490493e+01, 1.0) * dx\n"
			"               + vec4(-3.8384089380005428e+00, -2.8807577812678438e+00, -2.8807578157923714e+00, 1.0)) * dx\n"
			"               + vec4( 1.8197751787801404e+00,  1.2446621348569731e+00,  1.2446621345455240e+00, 1.0)) * dx\n"
			"               + vec4( 4.3033148291193501e-01,  2.7216552697590901e-01,  2.7216552697590901e-01, 1.0);\n"
			"    } else if (x < 1.5625000000000000e-01) {\n"
			"        float dx = x - 1.4062500000000000e-01;\n"
			"        return ((vec4( 1.0219970967189909e+01,  7.5634260052650815e+00,  7.5634129980772871e+00, 1.0) * dx\n"
			"               + vec4(-3.1771325566360935e+00, -2.3016961834760457e+00, -2.3016960546287546e+00, 1.0)) * dx\n"
			"               + vec4( 1.7101573429264429e+00,  1.1636862916578499e+00,  1.1636862928201939e+00, 1.0)) * dx\n"
			"               + vec4( 4.5788217333292702e-01,  2.9095718698132300e-01,  2.9095718698132300e-01, 1.0);\n"
			"    } else if (x < 1.7187500000000000e-01) {\n"
			"        float dx = x - 1.5625000000000000e-01;\n"
			"        return ((vec4( 7.9639431579939997e+00,  6.1408899801328447e+00,  6.1409385236185399e+00, 1.0) * dx\n"
			"               + vec4(-2.6980714175490665e+00, -1.9471605894792450e+00, -1.9471610703438818e+00, 1.0)) * dx\n"
			"               + vec4( 1.6183572808297999e+00,  1.0972979045804234e+00,  1.0972979002424965e+00, 1.0)) * dx\n"
			"               + vec4( 4.8386670078337102e-01,  3.0860669992418399e-01,  3.0860669992418399e-01, 1.0);\n"
			"    } else if (x < 1.8750000000000000e-01) {\n"
			"        float dx = x - 1.7187500000000000e-01;\n"
			"        return ((vec4( 6.2644603100084071e+00,  4.6737470532015237e+00,  4.6735658864465535e+00, 1.0) * dx\n"
			"               + vec4(-2.3247615820180978e+00, -1.6593063716605179e+00, -1.6593045770492627e+00, 1.0)) * dx\n"
			"               + vec4( 1.5398755152115629e+00,  1.0409468583126147e+00,  1.0409468745019785e+00, 1.0)) * dx\n"
			"               + vec4( 5.0852520448634997e-01,  3.2530002431617799e-01,  3.2530002431617799e-01, 1.0);\n"
			"    } else if (x < 2.0312500000000000e-01) {\n"
			"        float dx = x - 1.8750000000000000e-01;\n"
			"        return ((vec4( 5.0557657194808643e+00,  3.7546306563046934e+00,  3.7553067798388895e+00, 1.0) * dx\n"
			"               + vec4(-2.0311150049864537e+00, -1.4402244785416964e+00, -1.4402311761220805e+00, 1.0)) * dx\n"
			"               + vec4( 1.4718149435396168e+00,  9.9251668877820509e-01,  9.9251662835867638e-01, 1.0)) * dx\n"
			"               + vec4( 5.3204208768553596e-01,  3.4117754381277299e-01,  3.4117754381277299e-01, 1.0);\n"
			"    } else if (x < 2.1875000000000000e-01) {\n"
			"        float dx = x - 2.0312500000000000e-01;\n"
			"        return ((vec4( 4.1410369504978677e+00,  3.0442611292784201e+00,  3.0417378018965926e+00, 1.0) * dx\n"
			"               + vec4(-1.7941259868857882e+00, -1.2642261665274139e+00, -1.2642011708171326e+00, 1.0)) * dx\n"
			"               + vec4( 1.4120455530416129e+00,  9.5025964744900027e-01,  9.5025987293775116e-01, 1.0)) * dx\n"
			"               + vec4( 5.5456260470724394e-01,  3.5634832254989901e-01,  3.5634832254989901e-01, 1.0);\n"
			"    } else if (x < 2.3437500000000000e-01) {\n"
			"        float dx = x - 2.1875000000000000e-01;\n"
			"        return ((vec4( 3.4529542936776019e+00,  2.5030166001054397e+00,  2.5124337860985739e+00, 1.0) * dx\n"
			"               + vec4(-1.6000148798312006e+00, -1.1215264260924880e+00, -1.1216197113532298e+00, 1.0)) * dx\n"
			"               + vec4( 1.3590121019991601e+00,  9.1298226318931430e-01,  9.1298142165383922e-01, 1.0)) * dx\n"
			"               + vec4( 5.7620359423608403e-01,  3.7089909350945799e-01,  3.7089909350945799e-01, 1.0);\n"
			"    } else if (x < 2.5000000000000000e-01) {\n"
			"        float dx = x - 2.3437500000000000e-01;\n"
			"        return ((vec4( 2.8804720304898979e+00,  2.1365016738443594e+00,  2.1013562572536415e+00, 1.0) * dx\n"
			"               + vec4(-1.4381576473150630e+00, -1.0041975229625455e+00, -1.0038493776298592e+00, 1.0)) * dx\n"
			"               + vec4( 1.3115406562624998e+00,  8.7976782648532936e-01,  8.7977096713847847e-01, 1.0)) * dx\n"
			"               + vec4( 5.9706070167235203e-01,  3.8490017945975102e-01,  3.8490017945975102e-01, 1.0);\n"
			"    } else if (x < 2.6562500000000000e-01) {\n"
			"        float dx = x - 2.5000000000000000e-01;\n"
			"        return ((vec4( 2.5594362349562849e+00,  1.6480351971046261e+00,  1.7791996774743761e+00, 1.0) * dx\n"
			"               + vec4(-1.3031355208858491e+00, -9.0404900700109114e-01, -9.0534830307109471e-01, 1.0)) * dx\n"
			"               + vec4( 1.2687079505093606e+00,  8.4995147445464758e-01,  8.4993975337752603e-01, 1.0)) * dx\n"
			"               + vec4( 6.1721339984836798e-01,  3.9840953644479798e-01,  3.9840953644479798e-01, 1.0);\n"
			"    } else if (x < 2.8125000000000000e-01) {\n"
			"        float dx = x - 2.6562500000000000e-01;\n"
			"        return ((vec4( 1.8051368703401163e+00,  2.0114928499339442e+00,  1.5219803450456506e+00, 1.0) * dx\n"
			"               + vec4(-1.1831619473722732e+00, -8.2679735713681179e-01, -8.2194831818948333e-01, 1.0)) * dx\n"
			"               + vec4( 1.2298595525678273e+00,  8.2290700001499284e-01,  8.2295074367032950e-01, 1.0)) * dx\n"
			"               + vec4( 6.3672857672895500e-01,  4.1147559989891203e-01,  4.1147559989891203e-01, 1.0);\n"
			"    } else if (x < 2.9687500000000000e-01) {\n"
			"        float dx = x - 2.8125000000000000e-01;\n"
			"        return ((vec4( 3.0463396572174992e+00, -5.1289449769253304e-01,  1.3139910414908893e+00, 1.0) * dx\n"
			"               + vec4(-1.0985461565750803e+00, -7.3250862979615816e-01, -7.5060548951546846e-01, 1.0)) * dx\n"
			"               + vec4( 1.1942078634436499e+00,  7.9854284396916519e-01,  7.9837959042493967e-01, 1.0)) * dx\n"
			"               + vec4( 6.5566316039120298e-01,  4.2413934018690103e-01,  4.2413934018690103e-01, 1.0);\n"
			"    } else if (x < 3.1250000000000000e-01) {\n"
			"        float dx = x - 2.9687500000000000e-01;\n"
			"        return ((vec4(-2.8704741000704268e+00,  7.9617278728423395e+00,  1.1436982209969482e+00, 1.0) * dx\n"
			"               + vec4(-9.5574898514300999e-01, -7.5655055937549565e-01, -6.8901215944558303e-01, 1.0)) * dx\n"
			"               + vec4( 1.1621095018543048e+00,  7.7527629413835808e-01,  7.7588556465992320e-01, 1.0)) * dx\n"
			"               + vec4( 6.7406607937581298e-01,  4.3643578047198500e-01,  4.3643578047198500e-01, 1.0);\n"
			"    } else if (x < 3.2812500000000000e-01) {\n"
			"        float dx = x - 3.1250000000000000e-01;\n"
			"        return ((vec4( 1.8151104486259406e+01, -2.4442464044541747e+01,  1.0027690236563866e+00, 1.0) * dx\n"
			"               + vec4(-1.0903024585838113e+00, -3.8334456533601097e-01, -6.3540130533635109e-01, 1.0)) * dx\n"
			"               + vec4( 1.1301399480460732e+00,  7.5746543281474077e-01,  7.5519160427270549e-01, 1.0)) * dx\n"
			"               + vec4( 6.9197975319800997e-01,  4.4839513942303300e-01,  4.4839513942303300e-01, 1.0);\n"
			"    } else if (x < 3.4375000000000000e-01) {\n"
			"        float dx = x - 3.2812500000000000e-01;\n"
			"        return ((vec4(-6.1186402817835244e+01,  9.5847900752188593e+01,  8.8499813124143623e-01, 1.0) * dx\n"
			"               + vec4(-2.3946943579040159e-01, -1.5290850674239054e+00, -5.8839650735245796e-01, 1.0)) * dx\n"
			"               + vec4( 1.1093622621964760e+00,  7.2758371980286707e-01,  7.3606976344944286e-01, 1.0)) * dx\n"
			"               + vec4( 7.0944124373120399e-01,  4.6004370622823598e-01,  4.6004370622823598e-01, 1.0);\n"
			"    } else if (x < 3.5937500000000000e-01) {\n"
			"        float dx = x - 3.4375000000000000e-01;\n"
			"        return ((vec4( 2.3416165617778907e+02, -3.5362066219986355e+02,  7.8571521572691694e-01, 1.0) * dx\n"
			"               + vec4(-3.1075820678764288e+00,  2.9637852803349345e+00, -5.4691221995051564e-01, 1.0)) * dx\n"
			"               + vec4( 1.0570645824516820e+00,  7.5000091062960195e-01,  7.1833056458533395e-01, 1.0)) * dx\n"
			"               + vec4( 7.2648315725677903e-01,  4.7140452079103201e-01,  4.7140452079103201e-01, 1.0);\n"
			"    } else if (x < 3.7500000000000000e-01) {\n"
			"        float dx = x - 3.5937500000000000e-01;\n"
			"        return ((vec4(-8.6872290443392524e+02,  1.3233639570551793e+03,  7.0135001376448258e-01, 1.0) * dx\n"
			"               + vec4( 7.8687455654574343e+00, -1.3612183260283668e+01, -5.1008181921331641e-01, 1.0)) * dx\n"
			"               + vec4( 1.1314577621013850e+00,  5.8361969219290288e-01,  7.0181503272339907e-01, 1.0)) * dx\n"
			"               + vec4( 7.4313436015883205e-01,  4.8249790963716399e-01,  4.8249790963716399e-01, 1.0);\n"
			"    } else if (x < 3.9062500000000000e-01) {\n"
			"        float dx = x - 3.7500000000000000e-01;\n"
			"        return ((vec4( 8.8518476063177650e+02, -1.3713638359409479e+03,  6.2914033536808966e-01, 1.0) * dx\n"
			"               + vec4(-3.2852640579882809e+01,  4.8420502226677854e+01, -4.7720603731810629e-01, 1.0)) * dx\n"
			"               + vec4( 7.4108440250098861e-01,  1.1274996760428120e+00,  6.8638865996509557e-01, 1.0)) * dx\n"
			"               + vec4( 7.5942055326385305e-01,  4.9334191326730298e-01,  4.9334191326730298e-01, 1.0);\n"
			"    } else if (x < 4.0625000000000000e-01) {\n"
			"        float dx = x - 3.9062500000000000e-01;\n"
			"        return ((vec4(-2.3709260415260931e+02,  3.7516300791309146e+02,  5.6692410339443688e-01, 1.0) * dx\n"
			"               + vec4( 8.6403950747317122e+00, -1.5862177583054082e+01, -4.4771508409772709e-01, 1.0)) * dx\n"
			"               + vec4( 3.6276806648300275e-01,  1.6362234985994335e+00,  6.7193676744297315e-01, 1.0)) * dx\n"
			"               + vec4( 7.6635604473481300e-01,  5.1754916950676599e-01,  5.0395263067897000e-01, 1.0);\n"
			"    } else if (x < 4.2187500000000000e-01) {\n"
			"        float dx = x - 4.0625000000000000e-01;\n"
			"        return ((vec4( 6.3616714987678073e+01, -9.4300538300030098e+01,  5.1299127761488117e-01, 1.0) * dx\n"
			"               + vec4(-2.4733207449218502e+00,  1.7235884128720800e+00, -4.2114051675111286e-01, 1.0)) * dx\n"
			"               + vec4( 4.5912860288628182e-01,  1.4153080428153397e+00,  6.5836089867971004e-01, 1.0)) * dx\n"
			"               + vec4( 7.7322933071864097e-01,  5.4067369302384405e-01,  5.1434449987363995e-01, 1.0);\n"
			"    } else if (x < 4.3750000000000000e-01) {\n"
			"        float dx = x - 4.2187500000000000e-01;\n"
			"        return ((vec4(-1.6961859855932584e+01,  3.0379726001371605e+01,  4.6597626654549629e-01, 1.0) * dx\n"
			"               + vec4( 5.0871277012555960e-01, -2.6967493199418304e+00, -3.9709405061291531e-01, 1.0)) * dx\n"
			"               + vec4( 4.2843160328008978e-01,  1.4001024036423748e+00,  6.4557598356464707e-01, 1.0)) * dx\n"
			"               + vec4( 7.8004205557495998e-01,  5.6284895113959499e-01,  5.2453052831296199e-01, 1.0);\n"
			"    } else if (x < 4.5312500000000000e-01) {\n"
			"        float dx = x - 4.3750000000000000e-01;\n"
			"        return ((vec4( 4.6255693417292765e+00, -3.8807368791610912e+00,  4.2477880151371511e-01, 1.0) * dx\n"
			"               + vec4(-2.8637441062128022e-01, -1.2726996636275365e+00, -3.7525141311859517e-01, 1.0)) * dx\n"
			"               + vec4( 4.3190564014734417e-01,  1.3380797632741035e+00,  6.3350808569384220e-01, 1.0)) * dx\n"
			"               + vec4( 7.8679579246944298e-01,  5.8418305458977604e-01,  5.3452248382484902e-01, 1.0);\n"
			"    } else if (x < 4.6875000000000000e-01) {\n"
			"        float dx = x - 4.5312500000000000e-01;\n"
			"        return ((vec4(-1.1620953817302908e+00,  4.6334128006838897e+00,  3.8850531365210134e-01, 1.0) * dx\n"
			"               + vec4(-6.9550847727720383e-02, -1.4546092048382127e+00, -3.5533990679763977e-01, 1.0)) * dx\n"
			"               + vec4( 4.2634430798564099e-01,  1.2954655622043261e+00,  6.2209259632015113e-01, 1.0)) * dx\n"
			"               + vec4( 7.9349204761587200e-01,  6.0476502936325705e-01,  5.4433105395181702e-01, 1.0);\n"
			"    } else if (x < 4.8437500000000000e-01) {\n"
			"        float dx = x - 4.6875000000000000e-01;\n"
			"        return ((vec4( 3.8556361698416303e-01,  1.8233043610892945e+00,  3.5642377965443828e-01, 1.0) * dx\n"
			"               + vec4(-1.2402406874632776e-01, -1.2374179798061553e+00, -3.3712872022019752e-01, 1.0)) * dx\n"
			"               + vec4( 4.2331969991573404e-01,  1.2534026374442579e+00,  6.1127277402299740e-01, 1.0)) * dx\n"
			"               + vec4( 8.0013226419863903e-01,  6.2466922463944097e-01,  5.5396597989254404e-01, 1.0);\n"
			"    } else if (x < 5.0000000000000000e-01) {\n"
			"        float dx = x - 4.8437500000000000e-01;\n"
			"        return ((vec4(-3.2095667390052242e-02,  2.1503801318034825e+00,  3.2793327560925789e-01, 1.0) * dx\n"
			"               + vec4(-1.0595077420019512e-01, -1.1519505878800946e+00, -3.2042135554889573e-01, 1.0)) * dx\n"
			"               + vec4( 4.1972634299469458e-01,  1.2160687535741603e+00,  6.0099855408910530e-01, 1.0)) * dx\n"
			"               + vec4( 8.0671782600463904e-01,  6.4395849220469203e-01,  5.6343616981901101e-01, 1.0);\n"
			"    } else if (x < 5.1562500000000000e-01) {\n"
			"        float dx = x - 5.0000000000000000e-01;\n"
			"        return ((vec4( 7.7013830342289147e-02,  1.7153408159410617e+00,  3.0252602235293108e-01, 1.0) * dx\n"
			"               + vec4(-1.0745525860910382e-01, -1.0511515192018064e+00, -3.0504948325471176e-01, 1.0)) * dx\n"
			"               + vec4( 4.1639187373204928e-01,  1.1816452831510056e+00,  5.9122557223279892e-01, 1.0)) * dx\n"
			"               + vec4( 8.1325006079044404e-01,  6.6268653159200297e-01,  5.7274979532281600e-01, 1.0);\n"
			"    } else if (x < 5.3125000000000000e-01) {\n"
			"        float dx = x - 5.1562500000000000e-01;\n"
			"        return ((vec4( 4.5128006172428847e-02,  1.5453203541034857e+00,  2.7981246555779532e-01, 1.0) * dx\n"
			"               + vec4(-1.0384523531180902e-01, -9.7074491845456912e-01, -2.9086857595691812e-01, 1.0)) * dx\n"
			"               + vec4( 4.1309030351453502e-01,  1.1500531513126246e+00,  5.8191435255761725e-01, 1.0)) * dx\n"
			"               + vec4( 8.1973024340795897e-01,  6.8089965385828999e-01,  5.8191437396264600e-01, 1.0);\n"
			"    } else if (x < 5.4687500000000000e-01) {\n"
			"        float dx = x - 5.3125000000000000e-01;\n"
			"        return ((vec4( 5.1163279076130053e-02,  1.3521114454007919e+00,  2.5933722356445560e-01, 1.0) * dx\n"
			"               + vec4(-1.0172986002247641e-01, -8.9830802685596822e-01, -2.7775236663389646e-01, 1.0)) * dx\n"
			"               + vec4( 4.0987819264993680e-01,  1.1208491990421476e+00,  5.7302965032963571e-01, 1.0)) * dx\n"
			"               + vec4( 8.2615959870940303e-01,  6.9863813100577199e-01,  5.9093684028527904e-01, 1.0);\n"
			"    } else if (x < 5.6250000000000000e-01) {\n"
			"        float dx = x - 5.4687500000000000e-01;\n"
			"        return ((vec4( 4.7169570095915013e-02,  1.2029732434271569e+00,  2.4119519806979875e-01, 1.0) * dx\n"
			"               + vec4(-9.9331581315782819e-02, -8.3492780285280610e-01, -2.6559593427931261e-01, 1.0)) * dx\n"
			"               + vec4( 4.0673660762902653e-01,  1.0937673892029480e+00,  5.6453983312786682e-01, 1.0)) * dx\n"
			"               + vec4( 8.3253930425037204e-01,  7.1593724415352000e-01,  5.9982360722829198e-01, 1.0);\n"
			"    } else if (x < 5.7812500000000000e-01) {\n"
			"        float dx = x - 5.6250000000000000e-01;\n"
			"        return ((vec4( 4.5986272021792729e-02,  1.0731479391457011e+00,  2.2367640273462128e-01, 1.0) * dx\n"
			"               + vec4(-9.7120507717536803e-02, -7.7853843206715811e-01, -2.5428990936979079e-01, 1.0)) * dx\n"
			"               + vec4( 4.0366704373788093e-01,  1.0685569792823235e+00,  5.5641661682084964e-01, 1.0)) * dx\n"
			"               + vec4( 8.3887049280786097e-01,  7.3282810879294003e-01,  6.0858061945018505e-01, 1.0);\n"
			"    } else if (x < 5.9375000000000000e-01) {\n"
			"        float dx = x - 5.7812500000000000e-01;\n"
			"        return ((vec4( 4.4164995395678787e-02,  9.6091304374043085e-01,  2.1201124590809547e-01, 1.0) * dx\n"
			"               + vec4(-9.4964901216515268e-02, -7.2823462241970338e-01, -2.4380507799160542e-01, 1.0)) * dx\n"
			"               + vec4( 4.0066570922328631e-01,  1.0450136503059664e+00,  5.4863388264332780e-01, 1.0)) * dx\n"
			"               + vec4( 8.4515425472851702e-01,  7.4933833246934400e-01,  6.1721339984836798e-01, 1.0);\n"
			"    } else if (x < 6.0937500000000000e-01) {\n"
			"        float dx = x - 5.9375000000000000e-01;\n"
			"        return ((vec4( 4.2622287162048224e-02,  8.7204745369720627e-01,  1.8569722378857575e-01, 1.0) * dx\n"
			"               + vec4(-9.2894667057342825e-02, -6.8319182349437069e-01, -2.3386705083966344e-01, 1.0)) * dx\n"
			"               + vec4( 3.9773040346900729e-01,  1.0229601120885590e+00,  5.4117025563033927e-01, 1.0)) * dx\n"
			"               + vec4( 8.5139164012088198e-01,  7.6549254469187100e-01,  6.2572709029927098e-01, 1.0);\n"
			"    } else if (x < 6.2500000000000000e-01) {\n"
			"        float dx = x - 6.0937500000000000e-01;\n"
			"        return ((vec4( 4.1105693265725961e-02,  7.6494427361798978e-01,  2.2040881261248599e-01, 1.0) * dx\n"
			"               + vec4(-9.0896747346621815e-02, -6.4231459910231414e-01, -2.2516249347457395e-01, 1.0)) * dx\n"
			"               + vec4( 3.9485866261894537e-01,  1.0022490742354857e+00,  5.3399791900042926e-01, 1.0)) * dx\n"
			"               + vec4( 8.5758366090413296e-01,  7.8131282816150904e-01,  6.3412648747422795e-01, 1.0);\n"
			"    } else if (x < 6.4062500000000000e-01) {\n"
			"        float dx = x - 6.2500000000000000e-01;\n"
			"        return ((vec4( 3.9676521680195975e-02,  7.8428805986266303e-01,  3.3000425741025317e-02, 1.0) * dx\n"
			"               + vec4(-8.8969917974790910e-02, -6.0645783627647087e-01, -2.1483083038336367e-01, 1.0)) * dx\n"
			"               + vec4( 3.9204824597329829e-01,  9.8273700493269212e-01,  5.2712302331514893e-01, 1.0)) * dx\n"
			"               + vec4( 8.6373129272462201e-01,  7.9681907288959597e-01,  6.4241607443962101e-01, 1.0);\n"
			"    } else if (x < 6.5625000000000000e-01) {\n"
			"        float dx = x - 6.4062500000000000e-01;\n"
			"        return ((vec4( 3.8312487764607418e-02,  3.8021584708698697e-01,  6.7955965978490873e-01, 1.0) * dx\n"
			"               + vec4(-8.7110081021031724e-02, -5.6969433347040854e-01, -2.1328393542675311e-01, 1.0)) * dx\n"
			"               + vec4( 3.8929699598898854e-01,  9.6435962728039715e-01,  5.2043373009936589e-01, 1.0)) * dx\n"
			"               + vec4( 8.6983547675049300e-01,  8.1202926941800202e-01,  6.5060004863235499e-01, 1.0);\n"
			"    } else if (x < 6.7187500000000000e-01) {\n"
			"        float dx = x - 6.5625000000000000e-01;\n"
			"        return ((vec4( 3.7014142710244315e-02,  1.5972496107531242e+00, -1.7818291365727916e+00, 1.0) * dx\n"
			"               + vec4(-8.5314183157065751e-02, -5.5187171563820603e-01, -1.8142957637433552e-01, 1.0)) * dx\n"
			"               + vec4( 3.8660286686120576e-01,  9.4683515776307503e-01,  5.1426633147747391e-01, 1.0)) * dx\n"
			"               + vec4( 8.7589712135373898e-01,  8.2695975347197803e-01,  6.5868234670623604e-01, 1.0);\n"
			"    } else if (x < 6.8750000000000000e-01) {\n"
			"        float dx = x - 6.7187500000000000e-01;\n"
			"        return ((vec4( 3.5776320711640310e-02, -3.2011488281931193e+00,  7.3597907806637606e+00, 1.0) * dx\n"
			"               + vec4(-8.3579145217523049e-02, -4.7700064013415333e-01, -2.6495281715118513e-01, 1.0)) * dx\n"
			"               + vec4( 3.8396390860535284e-01,  9.3075902720413195e-01,  5.0729160657863759e-01, 1.0)) * dx\n"
			"               + vec4( 8.8191710368819698e-01,  8.4162541153017301e-01,  6.6666666666666696e-01, 1.0);\n"
			"    } else if (x < 7.0312500000000000e-01) {\n"
			"        float dx = x - 6.8750000000000000e-01;\n"
			"        return ((vec4( 3.4595751258128971e-02,  1.4479853717875505e+01, -2.6798031522024559e+01, 1.0) * dx\n"
			"               + vec4(-8.1902130184164909e-02, -6.2705449145570580e-01,  8.0037375692428664e-02, 1.0)) * dx\n"
			"               + vec4( 3.8137826367720146e-01,  9.1350816577304039e-01,  5.0440230280584453e-01, 1.0)) * dx\n"
			"               + vec4( 8.8789627117123804e-01,  8.5603985468214805e-01,  6.7455648764684994e-01, 1.0);\n"
			"    } else if (x < 7.1875000000000000e-01) {\n"
			"        float dx = x - 7.0312500000000000e-01;\n"
			"        return ((vec4( 3.3468991753281919e-02, -5.1708135322659281e+01,  1.0064307843765410e+02, 1.0) * dx\n"
			"               + vec4(-8.0280454343940114e-02,  5.1688651569708526e-02, -1.1761203519024725e+00, 1.0)) * dx\n"
			"               + vec4( 3.7884416079394984e-01,  9.0451807452482169e-01,  4.8727600630256263e-01, 1.0)) * dx\n"
			"               + vec4( 8.9383544287626004e-01,  8.7021556655528298e-01,  6.8235508762554498e-01, 1.0);\n"
			"    } else if (x < 7.3437500000000000e-01) {\n"
			"        float dx = x - 7.1875000000000000e-01;\n"
			"        return ((vec4( 3.2392951100837251e-02,  1.9512898026633002e+02, -3.7500834138704249e+02, 1.0) * dx\n"
			"               + vec4(-7.8711595355505024e-02, -2.3721301916799455e+00,  3.5415239498625635e+00, 1.0)) * dx\n"
			"               + vec4( 3.7635991001739599e-01,  8.6826117546059922e-01,  5.2423543752068902e-01, 1.0)) * dx\n"
			"               + vec4( 8.9973541084243802e-01,  8.8416402988700704e-01,  6.9006555934235403e-01, 1.0);\n"
			"    } else if (x < 7.5000000000000000e-01) {\n"
			"        float dx = x - 7.3437500000000000e-01;\n"
			"        return ((vec4( 3.1364727379629663e-02, -7.2624066315039011e+02,  1.4001148170350855e+03, 1.0) * dx\n"
			"               + vec4(-7.7193175772653277e-02,  6.7745407583042745e+00, -1.4036992052655055e+01, 1.0)) * dx\n"
			"               + vec4( 3.7392389796851849e-01,  9.3704884056410442e-01,  3.6024374841455642e-01, 1.0)) * dx\n"
			"               + vec4( 9.0559694130767698e-01,  8.9789583539346696e-01,  6.9769082462971099e-01, 1.0);\n"
			"    } else if (x < 7.6562500000000000e-01) {\n"
			"        float dx = x - 7.5000000000000000e-01;\n"
			"        return ((vec4( 3.0381616356811136e-02,  7.3556986866868601e+02, -1.4318093578633127e+03, 1.0) * dx\n"
			"               + vec4(-7.5722954176733137e-02, -2.7267990326870265e+01,  5.1593389995864584e+01, 1.0)) * dx\n"
			"               + vec4( 3.7153458343805934e-01,  6.1683869105526079e-01,  9.4706246627720525e-01, 1.0)) * dx\n"
			"               + vec4( 9.1142077587019599e-01,  9.1142077587019599e-01,  7.0523364734993799e-01, 1.0);\n"
			"    } else if (x < 7.8125000000000000e-01) {\n"
			"        float dx = x - 7.6562500000000000e-01;\n"
			"        return ((vec4( 2.9441135219075026e-02, -1.9705777042165474e+02,  3.8669242628155297e+02, 1.0) * dx\n"
			"               + vec4(-7.4298815910007615e-02,  7.2118472669743907e+00, -1.5522673653978197e+01, 1.0)) * dx\n"
			"               + vec4( 3.6919049328045406e-01,  3.0346145574438771e-01,  1.5106674091191798e+00, 1.0)) * dx\n"
			"               + vec4( 9.1720763258372495e-01,  9.1720763258372495e-01,  7.2716562162264098e-01, 1.0);\n"
			"    } else if (x < 7.9687500000000000e-01) {\n"
			"        float dx = x - 7.8125000000000000e-01;\n"
			"        return ((vec4( 2.8540822829984158e-02,  5.2837899997996146e+01, -1.0097631834123302e+02, 1.0) * dx\n"
			"               + vec4(-7.2918762696613473e-02, -2.0252357215406760e+00,  2.6035338279695983e+00, 1.0)) * dx\n"
			"               + vec4( 3.6689021861472559e-01,  3.8450226114178948e-01,  1.3088058493377956e+00, 1.0)) * dx\n"
			"               + vec4( 9.2295820699089703e-01,  9.2295820699089703e-01,  7.4845519918374903e-01, 1.0);\n"
			"    } else if (x < 8.1250000000000000e-01) {\n"
			"        float dx = x - 7.9687500000000000e-01;\n"
			"        return ((vec4( 2.7678922768475427e-02, -1.4122546221022333e+01,  2.9362371786331625e+01, 1.0) * dx\n"
			"               + vec4(-7.1580911626457966e-02,  4.5154084086539337e-01, -2.1297310942756997e+00, 1.0)) * dx\n"
			"               + vec4( 3.6463241120342760e-01,  3.5991327863123823e-01,  1.3162090170517629e+00, 1.0)) * dx\n"
			"               + vec4( 9.2867317309905195e-01,  9.2867317309905195e-01,  7.6915572487015205e-01, 1.0);\n"
			"    } else if (x < 8.2812500000000000e-01) {\n"
			"        float dx = x - 8.1250000000000000e-01;\n"
			"        return ((vec4( 2.6851775131151001e-02,  3.8183931751282176e+00, -5.8379224589604535e+00, 1.0) * dx\n"
			"               + vec4(-7.0283462121685680e-02, -2.1045351324502842e-01, -7.5336991679140475e-01, 1.0)) * dx\n"
			"               + vec4( 3.6241578036361283e-01,  3.6368026812530641e-01,  1.2711605637538392e+00, 1.0)) * dx\n"
			"               + vec4( 9.3435318430231395e-01,  9.3435318430231395e-01,  7.8931354544051302e-01, 1.0);\n"
			"    } else if (x < 8.4375000000000000e-01) {\n"
			"        float dx = x - 8.2812500000000000e-01;\n"
			"        return ((vec4( 2.6063496580937279e-02, -9.8987695961652500e-01,  3.3620382019700017e+00, 1.0) * dx\n"
			"               + vec4(-6.9024785162412977e-02, -3.1466333160893228e-02, -1.0270225320551760e+00, 1.0)) * dx\n"
			"               + vec4( 3.6023908899979878e-01,  3.5990027052521389e-01,  1.2433419317406114e+00, 1.0)) * dx\n"
			"               + vec4( 9.3999887425351902e-01,  9.3999887425351902e-01,  8.0896923113998398e-01, 1.0);\n"
			"    } else if (x < 8.5937500000000000e-01) {\n"
			"        float dx = x - 8.4375000000000000e-01;\n"
			"        return ((vec4( 2.5289790701126986e-02,  2.9751021549391093e-01,  7.0033007973428829e-01, 1.0) * dx\n"
			"               + vec4(-6.7803058760181542e-02, -7.7866815642917836e-02, -8.6942699133783219e-01, 1.0)) * dx\n"
			"               + vec4( 3.5810115393850828e-01,  3.5819194007515431e-01,  1.2137099079375957e+00, 1.0)) * dx\n"
			"               + vec4( 9.4561085768929998e-01,  9.4561085768929998e-01,  8.2815853605850198e-01, 1.0);\n"
			"    } else if (x < 8.7500000000000000e-01) {\n"
			"        float dx = x - 8.5937500000000000e-01;\n"
			"        return ((vec4( 2.4612980139061474e-02, -4.8328262834613035e-02,  1.2462888208522547e+00, 1.0) * dx\n"
			"               + vec4(-6.6617599821066215e-02, -6.3921024291640760e-02, -8.3659901885028742e-01, 1.0)) * dx\n"
			"               + vec4( 3.5600083114817627e-01,  3.5597650507617684e-01,  1.1870532515284062e+00, 1.0)) * dx\n"
			"               + vec4( 9.5118973121134198e-01,  9.5118973121134198e-01,  8.4691316246821002e-01, 1.0);\n"
			"    } else if (x < 8.9062500000000000e-01) {\n"
			"        float dx = x - 8.7500000000000000e-01;\n"
			"        return ((vec4( 2.3718003357877809e-02,  4.3262550459793069e-02,  9.5432454482368223e-01, 1.0) * dx\n"
			"               + vec4(-6.5463866377047708e-02, -6.6186411612013246e-02, -7.7817923037283798e-01, 1.0)) * dx\n"
			"               + vec4( 3.5393705823883076e-01,  3.5394357639018226e-01,  1.1618223413842950e+00, 1.0)) * dx\n"
			"               + vec4( 9.5673607402664396e-01,  9.5673607402664396e-01,  8.6526137593056196e-01, 1.0);\n"
			"    } else if (x < 9.0625000000000000e-01) {\n"
			"        float dx = x - 8.9062500000000000e-01;\n"
			"        return ((vec4( 2.3773347988404581e-02,  1.8536402554417759e-02,  9.1391585031942668e-01, 1.0) * dx\n"
			"               + vec4(-6.4352084969647186e-02, -6.4158479559210446e-02, -7.3344526733422788e-01, 1.0)) * dx\n"
			"               + vec4( 3.5190868399903863e-01,  3.5190693746563190e-01,  1.1382032086076221e+00, 1.0)) * dx\n"
			"               + vec4( 9.6225044864937603e-01,  9.6225044864937603e-01,  8.8322850531025798e-01, 1.0);\n"
			"    } else if (x < 9.2187500000000000e-01) {\n"
			"        float dx = x - 9.0625000000000000e-01;\n"
			"        return ((vec4( 2.0411271658957286e-02,  2.1814506292989311e-02,  7.9416477361003268e-01, 1.0) * dx\n"
			"               + vec4(-6.3237709282690721e-02, -6.3289585689472114e-02, -6.9060546185050475e-01, 1.0)) * dx\n"
			"               + vec4( 3.4991509346384586e-01,  3.4991556144612124e-01,  1.1159524159641105e+00, 1.0)) * dx\n"
			"               + vec4( 9.6773340156674204e-01,  9.6773340156674204e-01,  9.0083735297107703e-01, 1.0);\n"
			"    } else if (x < 9.3750000000000000e-01) {\n"
			"        float dx = x - 9.2187500000000000e-01;\n"
			"        return ((vec4( 2.9925950574317017e-02,  2.9549957472174999e-02,  8.1438789217981622e-01, 1.0) * dx\n"
			"               + vec4(-6.2280930923677098e-02, -6.2267030706988240e-02, -6.5337898808753447e-01, 1.0)) * dx\n"
			"               + vec4( 3.4795386471062134e-01,  3.4795373931492651e-01,  1.0949526589338288e+00, 1.0)) * dx\n"
			"               + vec4( 9.7318546387106897e-01,  9.7318546387106897e-01,  9.1810853411962201e-01, 1.0);\n"
			"    } else if (x < 9.5312500000000000e-01) {\n"
			"        float dx = x - 9.3750000000000000e-01;\n"
			"        return ((vec4(-8.4993852229346221e-03, -8.3986474483984299e-03,  4.1632155771993951e-01, 1.0) * dx\n"
			"               + vec4(-6.0878151990505988e-02, -6.0881876450480037e-02, -6.1520455564160559e-01, 1.0)) * dx\n"
			"               + vec4( 3.4602950404008725e-01,  3.4602953764059108e-01,  1.0751310410630610e+00, 1.0)) * dx\n"
			"               + vec4( 9.7860715186021296e-01,  9.7860715186021296e-01,  9.3506075970421498e-01, 1.0);\n"
			"    } else if (x < 9.6875000000000000e-01) {\n"
			"        float dx = x - 9.5312500000000000e-01;\n"
			"        return ((vec4( 1.3210083171865797e-01,  1.3207387372265536e-01,  1.6040605599926014e+00, 1.0) * dx\n"
			"               + vec4(-6.1276560672831049e-02, -6.1275563049623713e-02, -5.9568948262348342e-01, 1.0)) * dx\n"
			"               + vec4( 3.4412083665472259e-01,  3.4412082764840196e-01,  1.0562108217151689e+00, 1.0)) * dx\n"
			"               + vec4( 9.8399896760818195e-01,  9.8399896760818195e-01,  9.5171107393681598e-01, 1.0);\n"
			"    } else if (x < 9.8437500000000000e-01) {\n"
			"        float dx = x - 9.6875000000000000e-01;\n"
			"        return ((vec4(-3.9532580170327219e-01, -3.9531870749379783e-01, -3.0883889522318717e+00, 1.0) * dx\n"
			"               + vec4(-5.5084334186018956e-02, -5.5084600218874243e-02, -5.2049914387383023e-01, 1.0)) * dx\n"
			"               + vec4( 3.4230269767255306e-01,  3.4230270009733171e-01,  1.0387703744261485e+00, 1.0)) * dx\n"
			"               + vec4( 9.8936139950777302e-01,  9.8936139950777302e-01,  9.6807505502895397e-01, 1.0);\n"
			"    } else if (x < 1.0000000000000000e+00) {\n"
			"        float dx = x - 9.8437500000000000e-01;\n"
			"        return ((vec4( 1.5704582643383433e+00,  1.5704568454964483e+00,  1.4192370688206916e+01, 1.0) * dx\n"
			"               + vec4(-7.3615231140859841e-02, -7.3615164632646016e-02, -6.6526737600969921e-01, 1.0)) * dx\n"
			"               + vec4( 3.4029176696432056e-01,  3.4029176627152669e-01,  1.0202427725529684e+00, 1.0)) * dx\n"
			"               + vec4( 9.9469492278687599e-01,  9.9469492278687599e-01,  9.8416698587417395e-01, 1.0);\n"
			"    } else {\n"
			"        float dx = x - 1.0000000000000000e+00;\n"
			"        return ((vec4(-2.0078712962998271e+01,  4.4659701609405914e+01,  4.4659701609500793e+01, 1.0) * dx\n"
			"               + vec4( 0.0000000000000000e+00,  0.0000000000000000e+00,  0.0000000000000000e+00, 1.0)) * dx\n"
			"               + vec4( 0.0000000000000000e+00,  0.0000000000000000e+00,  0.0000000000000000e+00, 1.0)) * dx\n"
			"               + vec4( 1.0000000000000000e+00,  1.0000000000000000e+00,  1.0000000000000000e+00, 1.0);\n"
			"    }\n"
			"}\n"
		);
	}
};

} // namespace MATLAB
} // namespace colormap
