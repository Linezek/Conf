/*
 *
 * Antoine.galpin@epitech.eu
 *
 */

#ifndef WARPSYSTEM_H_
# define WARPSYSTEM_H_

namespace WarpSystem
{
  class QuantumReactor
  {
  private:
    bool	_stability;
  public:
    QuantumReactor();
    ~QuantumReactor();
    bool	isStable();
    void	setStability(bool);
  };

  class Core
  {
  private:
    QuantumReactor	*_coreReactor;
  public:
    Core(QuantumReactor *coreReactor);
    ~Core();
    QuantumReactor *checkReactor();
  };
};

#endif /* WARPSYSTEM_H_ */
